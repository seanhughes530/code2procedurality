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
    float speed = 5;
    
    ofSetColor(255, 0, 0);
    ofFill();
    
    float rand = ofRandomf();
    cout << rand << endl;
    
    if(yPos >= -500){
        float newX = xPos + ofRandom(-10,10);
        float newY = yPos - speed;
        
        ofDrawLine(xPos, yPos, newX, newY);
        setup(newX, newY);
    }
}