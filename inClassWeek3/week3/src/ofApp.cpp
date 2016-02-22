#include "ofApp.h"

/////////Text Stuff///////////
//void ofApp::drawWord(string word){
//    ofDrawBitmapString(word, ofGetWidth()/2, ofGetHeight()/2);
//}


//--------------------------------------------------------------
void ofApp::setup(){
/////////Text Stuff/////////////
//    phrase = "Hello World";
//    position.x = ofGetWidth()/2;
//    position.y = ofGetHeight()/2;

    
////////////Class Stuff///////////
    Jimbo.smell = "good";
    Jimbo.height = 15;
    Jimbo.name = "Jimbooooooo!";
    
    Bimbo.height = 25;
    
    Jimbo.r = 255;
    Jimbo.g = 0;
    Jimbo.b = 0;
    
    Bimbo.r = 0;
    Bimbo.g = 255;
    Bimbo.b = 0;
    

}

//--------------------------------------------------------------
void ofApp::update(){
///////////Class Stuff////////////
    cout << "Jimbo smell: " << Jimbo.smell << endl;
    cout << "Jimbo height: " << Jimbo.height << endl;
    cout << "Jimbo name: " << Jimbo.name << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){

//////////Methods for Writing Text/////////
//    ofBackground(255);
//    ofSetColor(255,0,0);
//    //ofDrawBitmapString("Hello World", ofGetWidth()/2, ofGetHeight()/2);  //Write text
//    
//    //ofDrawBitmapString(phrase, position);
//    drawWord(phrase);
    
//////////////Class' Work///////////////////
    Jimbo.draw(ofGetWidth()/2, ofGetHeight()/2);
    Bimbo.draw(ofGetWidth()/2 + 50, ofGetHeight()/2);
    
    
    
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
