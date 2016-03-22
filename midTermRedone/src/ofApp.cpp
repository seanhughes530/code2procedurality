#include "ofApp.h"

void recursiveFun(float _xPos, float _yPos){
    float xPos = _xPos;
    float yPos = _yPos;
    float speed = 5;
    
    ofSetColor(255, 0, 0);
    ofFill();
    
    float rand = ofRandomf();
    cout << rand << endl;
    
    if(rand >= 0){
        float newX = xPos + ofRandom(-5,5);
        float newY = yPos - speed;
    
        ofDrawLine(xPos, yPos, newX, newY);
    
        recursiveFun(newX, newY);
    }
}


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetFrameRate(10);
    float x = 0;
    float y = 0;
    float transX = ofGetWidth()/2;
    float transY = ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    //transY += 3;
    
    //recursiveFun(0,0);
    one.setup(x,y);
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
