#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
//    ofSetBackgroundColor(255, 255, 255);
//    yPOS = ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetBackgroundColor(0, 0, 0);
//    tree.setup(ofGetWidth()/2, yPOS, 150, 1, 0.45, PI/5, 5, 10, 0, -PI/2, 0, ofColor(255,0,0));
//    yPOS += 5;

}

//--------------------------------------------------------------
void ofApp::draw(){
//tree.setup(ofGetWidth()/2, yPOS, 150, 1, 0.45, PI/5, 5, 10, 0, -PI/2, 0, ofColor(255,0,0));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 's'){
        tree.setup(ofGetWidth()/2, ofGetHeight(), ofRandom(150), mouseY/200, 0.45, PI/(mouseX/100), 5, 10, 0, -PI/2, 0, ofColor(ofRandom(255),ofRandom(255),ofRandom(255),50));
        //tree.setup(<#float _xPos#>, <#float _yPos#>, <#float _length#>, <#float _width#>, <#float _splitPercentage#>, <#float _maxSplitAngle#>, <#float _maxSubdivisions#>, <#float _maxSegments#>, <#float _segmentsSinceStart#>, <#float _angle#>, <#float _curvature#>, <#ofColor _color#>)
        ofColor(ofRandom(100),ofRandom(255),ofRandom(180),50);
    }

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
