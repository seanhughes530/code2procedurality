#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

void ofApp::drawBranch(float length, float theta){
    ofDrawLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.45;
    
    if(length>1){
        
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(theta*0.5);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(theta*-0.5);
        drawBranch(length, theta);
        ofPopMatrix();
        
        
    }
}




//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    float rcolor = ofGetElapsedTimeMillis();
    float gcolor = ofGetElapsedTimeMillis();
    float bcolor = ofGetElapsedTimeMillis();
    ofSetBackgroundColor(rcolor,gcolor,bcolor);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight());
    drawBranch(600,cos(ofGetElapsedTimef())*300);
    ofPopMatrix();
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight());
    drawBranch(400,cos((ofGetElapsedTimef())*2)*250);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight());
    drawBranch(200,cos((ofGetElapsedTimef())*3)*200);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight());
    drawBranch(100,cos((ofGetElapsedTimef())*4)*150);
    ofPopMatrix();
    
    

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
