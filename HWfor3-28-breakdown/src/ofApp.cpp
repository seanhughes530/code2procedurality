#include "ofApp.h"

void ofApp::generate(){
    for(KochLine l : lines){
//        ofVec2f a = l.kochA();
//        ofVec2f b = l.kochB();
//        ofVec2f c = l.kochC();
//        ofVec2f d = l.kochD();
//        ofVec2f e = l.kochE();
        
//        next.push_back(KochLine(a,b));
//        next.push_back(KochLine(b,c));
//        next.push_back(KochLine(c,d));
//        next.push_back(KochLine(d,e));
    }
    lines = next;
}

//--------------------------------------------------------------
void ofApp::setup(){
    start.set(0,200);
    ending.set(ofGetWidth(), 200);
    
    Kline.setup(start, ending);
    
    lines.push_back( Kline );
    
    for(int i = 0; i < 5; i++){
        generate();
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    for (int i = 0; i > lines.size(); i++){
//        Kline.display();
//    }

    
    for (KochLine l : lines){
        Kline.display();
    }
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
