#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    //p.param.setup();
    ofSetBackgroundColor(0, 0, 0);
    time0 = ofGetElapsedTimef();
    bornCount = 0;
    bornRate = 5000;
    
    //sliders
    gui.setup();
    gui.add(radiusGui.setup("Radius", 100, 10, 500));
    gui.add(velRadiusGui.setup("velRad", 100, 0, 500));
    gui.add(lifetimeGui.setup("Lifetime", 1.0, 0.1, 5.0));
    gui.add(rotateGui.setup("Rotate", 90, 0, 360));
    gui.add(forceGui.setup("Force", 500, 0, 2000));
    gui.add(spinGui.setup("Spin", 1000, 0, 5000));
    gui.add(frictionGui.setup("Friction", 0.15, 0, 1));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    time = ofGetElapsedTimef();
    float dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    //delete dead particles
    for(int i = 0; i < p.size(); i++){  //runs through all paricles
        if(!p[i].live){  //if particle is not alive
            p.erase(p.begin() + i);  //delete particle that is not alive
        }
    }
    
    bornCount += bornRate * dt;
    //birth new particles
    if(bornCount >= 1){
        
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i = 0; i < bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);
        }
        
    }
    
    //create new particles
    for(int i = 0; i < p.size(); i++){
        p[i].update(dt);
        p[i].param.eRad = radiusGui;
        p[i].param.velRad = velRadiusGui;
        p[i].param.lifeTime = lifetimeGui;
        p[i].param.rotate = rotateGui;
        p[i].param.force = forceGui;
        p[i].param.spin = spinGui;
        p[i].param.friction = frictionGui;
    }
    
    
    

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < p.size(); i++){
        p[i].draw();
    }
    
    //sliders
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
