#include "ofApp.h"

void ofApp::drawRecursiveBackground(float length, float theta){
    ofSetColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255),255);
    ofFill();
    
    ofTranslate(0, ofGetHeight()/2);
    ofDrawLine(0,0,length,-length);
    
    length *= 0.8;
    
    if(length>1){
        ofPushMatrix();
        ofRotate(theta);
        drawRecursiveBackground(length, theta);
        ofPopMatrix();
    }
}



void ofApp::drawBackgrounds(){

    //background circles
    for(int i = 0; i < 8; i++){
        ofSetColor(ofColor(ofRandom(50,200),ofRandom(100, 200),ofRandom(150,250),100));
        ofFill();
        ofDrawCircle(ofRandom(-500,500), ofRandom(-1000, -50), ofRandom(20,40));
    }
    
    for(int i = 0; i < 10; i++){
        ofSetColor(ofColor(ofRandom(0,200),ofRandom(100, 255),ofRandom(100,250),ofRandom(50,200)));
        ofFill();
        int xVal[] = {-50, -468, -300, 200, -100, 500, 400, -350, 50, 136};
        ofDrawCircle(xVal[i], (-650 * i/3) - 50 , ofRandom(40,45));
    }
    
    for(int i = 0; i < 2; i++){
        ofSetColor(ofColor(ofRandom(50,255),ofRandom(10, 150),ofRandom(150,250),100));
        ofFill();
        ofDrawCircle(ofRandom(-500,500), ofRandom(-2000, -1000), ofRandom(20,40));
    }
    
    //background for "second stage"
    ofSetColor(255);
    ofDrawRectangle(-ofGetWidth()/2, -1950, ofGetWidth(), -5000);
    
    
    //recursive background in "second stage"
    ofPushMatrix();
    ofTranslate(0,-3000);
    drawRecursiveBackground(500, -ofGetElapsedTimef()*50);
    ofPopMatrix();
    
    
}

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofSetFrameRate(25);
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0, 0, 0);
    transPosX = ofGetWidth()/2;
    transPosY = ofGetHeight();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //translate canvas
    if(transPosY <= 3000){
        transPosY += 3;
    } else {
        transPosY = 3001;
    }
    ofTranslate(transPosX, transPosY);
    
    //draw backgrounds for movement
    drawBackgrounds();
    
    //recursive class called
    branch1.setup(0, 0, 5, ofColor(200,0,0, 150), ofDegToRad(300), 7);
    branch2.setup(-ofGetWidth()/4, 0, 7, ofColor(0,0,200, 150), ofDegToRad(250), 8);
    branch3.setup(ofGetWidth()/4, 0, 5, ofColor(0,200,0, 150), ofDegToRad(100), 7.5);



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
