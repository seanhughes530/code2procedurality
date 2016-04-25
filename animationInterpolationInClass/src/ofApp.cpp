#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    pct = 0;
    
    myRectangle.pos.x = 10;
    myRectangle.pos.y = 10;
    
    turnAround = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    //pct += 0.01;
    //bool turnAround;
    
    if (pct >= 0.99){
        turnAround = true;
    } if (pct <= 0.01){
        turnAround = false;
    }
    
    if(turnAround == false){
        pct += 0.01;
    } else {
        pct -= 0.01;
    }

    
    myRectangle.interpolate(pct);
    //myRectangle.zeno(mouseX,mouseY);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    myRectangle.draw();
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
