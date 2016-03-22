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
    ofSetFrameRate(15);
    float x = 0;
    float y = 0;
    float transX = ofGetWidth()/2;
    float transY = ofGetHeight();
    one.setup(x,y);
}

//--------------------------------------------------------------
void ofApp::update(){
    //one.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    //transY += 3;
    
    //recursiveFun(0,0);
    one.draw();
    
//    ofPopMatrix();
//    transY += 0.5;
//    ofTranslate(transX, transY);
//    drawBackgrounds();
//    ofPushMatrix();
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
