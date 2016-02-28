#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    for(int i=0; i<NBALLS; i++){
//        int size = (i+1) * 10;
//        int randomX = ofRandom(0, ofGetWidth());
//        int randomY = ofRandom(0, ofGetHeight());
//        
//        myBall[i].setup(randomX, randomY, size);
//    }
    Ball.setup();
    BallBlue.setup();
    BallRed.setup();
    BallGreen.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
//    for(int i=0; i<myBall.size(); i++){
//        myBall[i].update();
//    }
    Ball.update();
    BallBlue.update();
    BallRed.update();
    BallGreen.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    for(int i=0; i<myBall.size(); i++){
//        myBall[i].draw();
//    }
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    Ball.draw();
    BallBlue.draw();
    BallRed.draw();
    BallGreen.draw();
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
//    Ball tempBall;
////    tempBall.setup(x,y,ofRandom(10,40));
//    tempBall.setup();
//    myBall.push_back(tempBall);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    for(int i=0; i < myBall.size(); i++){
//        float distance = ofDist(x,y,myBall[i].x, myBall[i].y);
//        
//        if(distance < myBall[i].dim){
//            myBall.erase(myBall.begin()+i);
//        }
//    }
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
