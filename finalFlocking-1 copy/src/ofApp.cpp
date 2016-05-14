#include "ofApp.h"

void ofApp::lookForFood(){
    
    for(int i = 0; i < flock.size(); i++){
        
        //go through all food in scene
        for(int j = 0; j < allFood.size(); j++){
            
            //if boids are close enough, seek out the food
            if( (flock[i].location.x > (allFood[j].location.x - 150)) && (flock[i].location.x < (allFood[j].location.x + 150)) && (flock[i].location.y > (allFood[j].location.y - 150)) && (flock[i].location.y < (allFood[j].location.y + 150)) ){
                
                flock[i].seek(allFood[j].location);
                
                
                //the first one to get to the food, eats it and grows - food disappears
                if( (flock[i].location.x > (allFood[j].location.x - allFood[j].rad/2)) && (flock[i].location.x < (allFood[j].location.x + allFood[j].rad/2)) && (flock[i].location.y > (allFood[j].location.y - allFood[j].rad/2)) && (flock[i].location.y < (allFood[j].location.y + allFood[j].rad/2)) ){
                    
                    allFood.erase(allFood.begin() + j);
                    flock[i].rad += 1;
                    flock[i].lifeSpan = 200;
                    flock[i].seek(target);
                    
                }
                
            }
        }
    }
    
}

void ofApp::predatorBirth(){
    
    for(int i = 0; i < flock.size(); i++){
        
        //if boid becomes very large, make others avoid it
        if(flock[i].rad >= 5){
            predators.push_back(flock[i]);
        }
        
        for(int j = 0; j < predators.size(); j++){
            predators[j].update();
            predators[j].applyForce(force);
            predators[j].seek(target);
            predators[j].arrive(target);
            
            //make boids avoid predators if close
            if( (flock[i].location.x > (predators[j].location.x - 100)) && (flock[i].location.x < (predators[j].location.x + 100)) && (flock[i].location.y > (predators[j].location.y - 100)) && (flock[i].location.y < (predators[j].location.y + 100)) ){
                
                flock[i].avoid(predators[j].location);
                
                //predators will eat boids if they touch
                if( (flock[i].location.x > (predators[j].location.x - predators[j].rad/2)) && (flock[i].location.x < (predators[j].location.x + predators[j].rad/2)) && (flock[i].location.y > (predators[j].location.y - predators[j].rad/2)) && (flock[i].location.y < (predators[j].location.y + predators[j].rad/2)) ){
                    
                    //flock.erase(flock.begin() + i);
                    predators[j].rad += 2;
                    
                }
                
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
    
}

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i < 20; i++){
        float startX = ofRandom(ofGetWidth());
        float startY = ofRandom(ofGetHeight());
        
        Boid boids;
        boids.setup(startX, startY);
        flock.push_back(boids);
    }
    
    force.set(0.08,0.08);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //target.set(ofGetMouseX(),ofGetMouseY());
    point.set(0,0);
    
    for(int i = 0; i < flock.size(); i++){
        flock[i].update();
        flock[i].applyForce(force);
        flock[i].seek(target);
        flock[i].arrive(target);
        flock[i].avoid(point);
        
    }
    
    lookForFood();
    
    predatorBirth();
        
    checkForDeath();
    

    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < flock.size(); i++){
        flock[i].display();
    }
    
    for(int i = 0; i < allFood.size(); i++){
        allFood[i].draw();
    }

    //crazy cool effect but not correct for the system
//    for(int i = 0; i < predators.size(); i++){
//        predators[i].display();
//    }
    
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
//    food.setup(x,y);
//    allFood.push_back(food);
//    
//    cout << "make food at " << x <<","<< y << endl;
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
