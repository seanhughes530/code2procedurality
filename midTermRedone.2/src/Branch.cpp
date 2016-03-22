//
//  Branch.cpp
//  midTermRedone
//
//  Created by Sean Hughes on 3/17/16.
//
//

#include "Branch.hpp"

void Branch::setup(float _xPos, float _yPos){
    float xPos = _xPos;
    float yPos = _yPos;
    float newY = -1;
    //float speed = 2;
    float speed = int(ofGetElapsedTimef());
    
    ofSetColor(255, 0, 0);
    ofFill();
    
}

void Branch::update(){
    newX = xPos + ofRandom(-10,10);
    newY -= speed;
    draw();
}
    
void Branch::draw(){
    newX = xPos + ofRandom(-10,10);
    newY -= speed;
    
    float rand = ofRandomf();
    
    if(rand <= 0.9){
        ofDrawLine(xPos, yPos, newX, newY);
        update();
    }
}

