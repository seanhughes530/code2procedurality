#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.load("cats.jpg");
    width = ofGetWidth();
    height = 600;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    myImage.draw(0,0,width,height);
    
    currentCol = myImage.getColor(ofGetMouseX(), ofGetMouseY());
    
    red = currentCol.r;
    green = currentCol.g;
    blue = currentCol.b;
    count = 0;
    
    for(int i = 0; i < width; i++){
        
        for(int j = 0; j < height; j++){
            
            ofColor pixColor = myImage.getColor(i,j);
            checkRed = pixColor.r;
            checkBlue = pixColor.b;
            checkGreen = pixColor.g;
            
            
            if(red == checkRed && green == checkGreen && blue == checkBlue){
                
                count++;
                ofDrawLine(i,j,ofGetMouseX(),ofGetMouseY());
                
            }
            
        }
        
    }
    cout << count << endl;
    ofSetBackgroundColor(currentCol);

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
    currentCol = myImage.getColor(x, y);

    red = currentCol.r;
    green = currentCol.g;
    blue = currentCol.b;
    count = 0;
    
    for(int i = 0; i < width; i++){
        
        for(int j = 0; j < height; j++){
            
            ofColor pixColor = myImage.getColor(i,j);
            checkRed = pixColor.r;
            checkBlue = pixColor.b;
            checkGreen = pixColor.g;
            
            
            if(red == checkRed && green == checkGreen && blue == checkBlue){
        
                count++;
                
            }
            
        }
        
    }
    cout << count << endl;
    ofSetBackgroundColor(currentCol);
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
