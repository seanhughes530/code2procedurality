#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    amplitude = ofGetHeight()/2;
    period = 100;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    circleX = ofGetElapsedTimef() * period;
    circleY = amplitude * sin(ofGetElapsedTimef());
    
    circle2Y = amplitude * sin(ofGetElapsedTimef() * 3*PI/2);
    
    float sine = sin(ofGetElapsedTimef());
    mapX = ofMap(sine, -1, 1, 0, ofGetWidth()/4);
    mapY = ofMap(sine, -1, 1, 0, ofGetHeight()/4);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofTranslate(0, ofGetHeight()/2);
    ofSetColor(255, 0, 0);
    ofDrawCircle(circleX, circleY, 10, 10);
    
    ofSetColor(0,255,0);
    ofDrawCircle(circleX, circle2Y, 10, 10);
    
    
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, mapX, mapY);
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
