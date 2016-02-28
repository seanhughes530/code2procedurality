#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    bob.xPos = 100;
//    bob.yPos = 100;
//    sarah.xPos = ofGetWidth()/2;
//    sarah.yPos = ofGetHeight()/2;
//    
//    bob.setup();
//    sarah.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
//    bob.update();
//    sarah.update();
    
    for(int i = 0; i < myAliens.size(); i++){
        myAliens[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    bob.draw();
//    sarah.draw();
    
    for(int i = 0; i < myAliens.size(); i++){
        myAliens[i].draw();
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
    Alien tempAlien;  //declare it because it is created when mouse is draged
    tempAlien.setup(x,y);  //x and y in mouse dragged is mouseX and mouseY
    myAliens.push_back(tempAlien);  //vectorName.push(object);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(int i = 0; i < myAliens.size(); i++){
        float dist = ofDist(x,y,myAliens[i].xPos,myAliens[i].yPos);  //distance between mouse and position of ellipse
        if(dist < myAliens[i].diam){
            myAliens.erase(myAliens.begin()+i);  //if you click inside a circle, it is erased
            //(myAliens.begin()+i) brings you to the object in the vector
        }
    }
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
