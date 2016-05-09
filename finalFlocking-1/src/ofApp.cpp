#include "ofApp.h"

void ofApp::lookForFood(){
    
    for(int i = 0; i < flock.size(); i++){
        
        //base how far away boids can sense food by much life they have leftf
        hunger = 150;
        if(flock[i].lifeSpan < 200){
            hunger *= 1.5;
        } else if(flock[i].lifeSpan < 75){
            hunger *= 2;
        }
        
        //go through all food in scene
        for(int j = 0; j < allFood.size(); j++){
            
            //if boids are close enough, seek out the food
            if(flock[i].location.distance(allFood[j].location) < hunger){
                
                flock[i].seek(allFood[j].location);
                
                //the first one to get to the food, eats it and grows - food disappears
                if(flock[i].location.distance(allFood[j].location) < allFood[j].rad/2){
                    
                    allFood.erase(allFood.begin() + j);
                    flock[i].rad += 1;
                    flock[i].lifeSpan += 100;
                    flock[i].seek(target);
                    
                }
                
            }
        }
        
        //if boid eats enough, turn it into a predator
        if(flock[i].rad >= 10){
            Boid boids;
            boids.setup(flock[i].location.x, flock[i].location.y);
            predators.push_back(boids);
            predators[i].lifeSpan = 40;
            predatorAction();
            
            
            flock.erase(flock.begin() + i);
        }
    }
    
}

void ofApp::predatorAction(){
        
    for(int j = 0; j < predators.size(); j++){
        
        predators[j].rad = 10;
        predators[j].maxSpeed = 4.5;
        predators[j].maxForce = 0.15;
        
        for(int i = 0; i < flock.size(); i++){
            
            //if the predators get close to the flock then pursue them
            if(predators[i].location.distance(flock[i].location) < 150){
                
                predators[j].seek(flock[i].location);
                predators[j].arrive(flock[i].location);
            }
            
            //make boids avoid predators if too close
            if(flock[i].location.distance(predators[i].location) < 100){
                
                flock[i].avoid(predators[j].location);
                
            }
            
           //predators will eat boids if they touch
            if(flock[i].location.distance(predators[j].location) < predators[j].rad/2){
                
                flock.erase(flock.begin() + i);
                predators[j].rad += 1;
                predators[j].maxSpeed += 0.1;
                
            }
            
        }
        
    }
    
}

void ofApp::checkForDeath(){
    
    for(int i = 0; i < flock.size(); i++){
        
        if(flock[i].lifeSpan <= 10){
            food.setup(flock[i].location.x, flock[i].location.y);
            allFood.push_back(food);
            flock.erase(flock.begin() + i);
        }
        
    }
    
    for(int i = 0; i < predators.size(); i++){
        
        if(predators[i].lifeSpan <= 10){
            food.setup(predators[i].location.x, predators[i].location.y);
            allFood.push_back(food);
            predators.erase(predators.begin() + i);
        }
        
    }
    
}

void ofApp::checkForLife(){
    float count = 0;
    
    for(int i = 0; i < flock.size(); i++){
        
        for(int j = 0; j < flock.size(); j++){
            
            //check if boids are close to each other for a long time
            if( i != j){
                if(flock[i].location.distance(flock[j].location) <= 2){
                    count++;
                    cout << count << endl;
                    
                    if(count <= 5){
                        float startX = ofRandom(ofGetWidth());
                        float startY = ofRandom(ofGetHeight());
                    
                        Boid boids;
                        boids.setup(startX, startY);
                        flock.push_back(boids);
                        flock[i].lifeSpan = 1000/flock.size();
                    }
                    
                } else {
                    count = 0;
                }
            }
            
        }
        
    }
    
    //cout << flock.size() << endl;
}
    


//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i < 15; i++){
        float startX = ofRandom(ofGetWidth());
        float startY = ofRandom(ofGetHeight());
        
        Boid boids;
        boids.setup(startX, startY);
        flock.push_back(boids);
        flock[i].lifeSpan = 1000/flock.size();
    }
    
    force.set(0.08,0.08);
    
//    myImage.load("water_texture.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    point.set(0,0);
    
    for(int i = 0; i < flock.size(); i++){
        flock[i].update();
        flock[i].applyForce(force);
        flock[i].seek(target);
        flock[i].arrive(target);
        flock[i].avoid(point);
    }
    
    for(int i = 0; i < predators.size(); i++){
        predators[i].update();
        predators[i].applyForce(force);
        predators[i].seek(target);
        predators[i].arrive(target);
        predators[i].avoid(point);
        predators[i].color.set(228,170,145);
    }
    
    lookForFood();
    
    predatorAction();
    
    checkForDeath();
    
    checkForLife();
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//    myImage.draw(0, 0, ofGetScreenWidth(), ofGetScreenHeight());
    
    ofSetBackgroundColor(145,203,228);
    
    for(int i = 0; i < flock.size(); i++){
        flock[i].display();
    }
    
    for(int i = 0; i < allFood.size(); i++){
        allFood[i].draw();
    }

    //crazy cool effect but not correct for the system
    for(int i = 0; i < predators.size(); i++){
        predators[i].display();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'f') {
        for(int i = 0; i < 10; i++){
            float x = ofRandom(ofGetWidth());
            float y = ofRandom(ofGetHeight());
            
            food.setup(x,y);
            allFood.push_back(food);
        }
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
