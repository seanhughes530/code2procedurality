#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetFrameRate(3);
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0, 0, 0);
    transPosX = ofGetWidth()/2;
    transPosY = ofGetHeight()/2;
}

//--------------------------------------------------------------
void ofApp::update(){
    //transPosX = 0;
//    transPos -= 30;  //translates origin point to move branches down
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofPushMatrix();
    transPosY += 3;
    ofTranslate(transPosX, transPosY);
    ofSetLineWidth(5);
    ofDrawLine(-transPosX, 0, transPosX*2, 0);
    branch1.setup(0, 0, 2, ofColor(255,0,0, 150), ofDegToRad(300));
    branch1.setup(-ofGetWidth()/2, 0, 7, ofColor(0,0,255, 150), ofDegToRad(250));
    branch1.setup(ofGetWidth()*2/3, 0, 5, ofColor(0,255,0, 150), ofDegToRad(100));
//    ofPopMatrix();

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
