#include "ofApp.h"

///////Example 8.1/////////
//void ofApp::drawCircle(int x, int y, float rad){
//    ofNoFill();
//    ofDrawCircle(x, y, rad);
//    if(rad > 2){
//        rad *= 0.75;
//        drawCircle(x, y, rad);
//    }
//}


////////Example 8.2/////////
//void ofApp::drawCircle(int x, int y, float rad){
//    ofSetColor(0, 0, 0);
//    ofNoFill();
//    ofDrawCircle(x, y, rad);
//    if(rad > 2){
//        drawCircle(x + rad/2, y, rad/2);
//        drawCircle(x - rad/2, y, rad/2);
//    }
//}


////////Example 8.3/////////
//void ofApp::drawCircle(int x, int y, float rad){
//    ofSetColor(0, 0, 0);
//    ofNoFill();
//    ofDrawCircle(x, y, rad);
//    if(rad > 8){
//        drawCircle(x + rad/2, y, rad/2);
//        drawCircle(x - rad/2, y, rad/2);
//        drawCircle(x, y + rad/2, rad/2);
//        drawCircle(x, y- rad/2, rad/2);
//    }
//}


////////Example 8.4/////////
void ofApp::cantor(float x, float y, float len){
    ofSetColor(0);
    ofNoFill();
    ofDrawLine(x,y,x+len,y);
    if(len >= 1){
        y += 20;
        cantor(x,y,len/3);
        cantor(x+len*2/3,y,len/3);
    }
}



//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetBackgroundAuto(false);
//    drawCircle(ofGetWidth()/2, ofGetHeight()/2, 800);
    cantor(10,20,ofGetWidth()-20);
}

//--------------------------------------------------------------
void ofApp::draw(){

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
