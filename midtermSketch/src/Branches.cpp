//
//  Branches.cpp
//  midtermSketch
//
//  Created by Sean Hughes on 3/10/16.
//
//

#include "Branches.hpp"


void Branches::setup(float _xPos, float _yPos, float _diam, ofColor _color){
    
    //incoming values to previous branch vals
    pos.x = _xPos;
    pos.y = _yPos;
    diam = _diam;
    color = _color;
    
    ofSetColor(color);
    ofFill();
    ofDrawCircle(pos.x, pos.y, diam);
    
//    if(yPos >= 100){
//        yPos -= 2;
//        Branches branchOff;
//        branchOff.setup(xPos, yPos, diam, color);
//    }
    
    float stemTime = ofGetElapsedTimef();
    if(stemTime % 2 == 1){
        pos.y -= 2;
        Branches branchOff;
        branchOff.setup(pos.x, pos.y, diam, color);
    }
}