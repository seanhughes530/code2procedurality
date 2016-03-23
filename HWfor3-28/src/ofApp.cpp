#include "ofApp.h"

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

///////////////////Exercise 8.1/////////////////////////
//void ofApp::myCantor(float x, float y, float rad){
//    ofSetColor(0);
//    ofNoFill();
//    ofDrawCircle(x,y,rad);
//    ofDrawCircle(x+rad*0.5,y,rad);
//    ofDrawCircle(x-rad*0.5,y,rad);
//        if(rad > 8){
//            myCantor(x + rad*3, y, rad/2);
//            myCantor(x - rad*3, y, rad/2);
//            myCantor(x, y + rad*3, rad/2);
//            myCantor(x, y - rad*3, rad/2);
//        }
//    rad *= 10;
//    ofDrawLine(x+rad,y+rad,x-rad,y-rad);
//    ofDrawLine(x-rad,y+rad,x+rad,y-rad);
//}


//////////////////Exercise 8.2///////////////////////////
void ofApp::generate(){
    for(KochLine l : lines){
        ofVec2f a = l.kochA();
        ofVec2f b = l.kochB();
        ofVec2f c = l.kochC();
        ofVec2f d = l.kochD();
        ofVec2f e = l.kochE();
        
        next.push_back(KochLine(a,b));
        next.push_back(KochLine(b,c));
        next.push_back(KochLine(c,d));
        next.push_back(KochLine(d,e));
    }
    lines = next;
}



//--------------------------------------------------------------
void ofApp::setup(){
    
    start.set(0,200);
    ending.set(ofGetWidth(), 200);
    
//    KochLine.setup(start, ending);
    
    lines.push_back( KochLine(start,ending) );
    
    for(int i = 0; i < 5; i++){
        generate();
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetBackgroundAuto(false);
    
    ///////////////Excersise 8.1///////////////////
//    myCantor(ofGetWidth()/2,ofGetHeight()/2,50);
//    myCantor(ofGetWidth()/8,ofGetHeight()/2,20);
//    myCantor(ofGetWidth()*7/8,ofGetHeight()/2,20);
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (KochLine l : lines){
        kLine.display();
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
