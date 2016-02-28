#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
    alpha = ofRandom(0,150);
    
    r2 = ofRandom(255);
    g2 = ofRandom(255);
    b2 = ofRandom(255);
    
    diam = ofRandom(200,600);
}

void ofApp::drawBack(float length, float theta){
    ofSetColor(r,g,b,alpha);
    ofFill();
    
    ofTranslate(0,length);
    ofDrawEllipse(-length,length+50,diam,diam);
    
    length *= 0.7;
    
    if(length>1){
        ofPushMatrix();
        ofRotate(theta);
        drawBack(length, theta);
        ofPopMatrix();
    }
}

void ofApp::drawFor(float length, float theta){
    ofSetColor(r2,g2,b2,255);
    ofFill();
    
    ofTranslate(0, ofGetHeight()/2);
    ofDrawLine(0,0,length,-length);
    
    length *= 0.8;
    
    if(length>1){
        ofPushMatrix();
        ofRotate(theta);
        drawFor(length, theta);
        ofPopMatrix();
//        
//        ofPushMatrix();
//        ofRotate(-theta);
//        drawFor(length, theta);
//        ofPopMatrix();
//
//        ofPushMatrix();
//        ofRotate(theta*0.5);
//        drawFor(length, theta);
//        ofPopMatrix();
//        
//        ofPushMatrix();
//        ofRotate(-theta*2);
//        drawFor(length, theta);
//        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
               
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,0);
    drawBack(ofGetHeight()/2, ofGetElapsedTimef()*50);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,0);
    drawFor(600, -ofGetElapsedTimef()*50);
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
