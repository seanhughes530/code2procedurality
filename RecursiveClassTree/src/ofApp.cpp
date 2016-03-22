#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(1);  //sets frame rate to 1
    
    me.dotSize = 8;
    me.offSetAngleA = ofDegToRad(1.5);
    me.offSetAngleB = ofDegToRad(50);
    
    
    //slider setup
    gui.setup();  //setup visual gui
    gui.add(dotSizeGui.setup("dotsize", 7, 1, 14));  //setup actual slider
    gui.add(angleGui.setup("me.offSetAngleA", ofDegToRad(1.5), ofDegToRad(0.5), ofDegToRad(5)));
    gui.add(angleBGui.setup("me.offSetAngleB", ofDegToRad(50), ofDegToRad(10), ofDegToRad(200)));
    gui.add(angleCGui.setup("angle", ofDegToRad(270), ofDegToRad(0), ofDegToRad(360)));
    gui.add(XGui.setup("me.x", 0, -600, 600));
    gui.add(YGui.setup("me.y", 0, -600, 100));
    //gui.add(angle.setup(name of variable, starting point, begin range, end range));
}

//--------------------------------------------------------------
void ofApp::update(){
    me.dotSize = dotSizeGui;
    me.offSetAngleA = angleGui;
    me.offSetAngleB = angleBGui;
    //me.x = XGui;
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();  //draws gui
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    x = XGui;
    y = YGui;
    angle = angleCGui;
    me.seed1(me.dotSize, angle , x, y);
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
