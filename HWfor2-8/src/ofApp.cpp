#include "ofApp.h"

void ofApp::drawHead(){
    ofSetColor(175);
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, 200, 250);
}

void ofApp::drawHat(){
    ofSetColor(0);
    ofDrawRectangle(ofGetWidth()/2-50, ofGetHeight()/2-260, 100, 150);
    ofDrawLine(ofGetWidth()/2-75, ofGetHeight()/2-110, ofGetWidth()/2+75, ofGetHeight()/2-110);
}

void ofApp::drawFace(){
    ofSetColor(255);
    ofDrawEllipse(ofGetWidth()/2-30, ofGetHeight()/2-50, 40, 40);
    ofDrawEllipse(ofGetWidth()/2+30, ofGetHeight()/2-50, 40, 40);
    ofSetColor(0);
    ofDrawEllipse(ofGetWidth()/2-30, ofGetHeight()/2-50, 10, 10);
    ofDrawEllipse(ofGetWidth()/2+30, ofGetHeight()/2-50, 10, 10);
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    drawHead();
    drawHat();
    drawFace();
    
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
