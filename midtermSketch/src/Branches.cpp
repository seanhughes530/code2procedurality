//
//  Branches.cpp
//  midtermSketch
//
//  Created by Sean Hughes on 3/10/16.
//
//

#include "Branches.hpp"


void Branches::setup(float _xPos, float _yPos, float _diam, ofColor _color, float _angle){
    
    //incoming values to previous branch vals
    pos.x = _xPos;
    pos.y = _yPos;
    diam = _diam;
    color = _color;
    angle = _angle;
    
//    transPos = ofGetHeight();
//    ofTranslate(ofGetWidth()/2, transPos);
    anchorPX1 = 200;
    anchorPX2 = 200;
    anchorPY1 = 200;
    anchorPY2 = 200;
    
    if(int(ofGetElapsedTimef())%2 == 1){
        anchorPX1 *= diam;
        anchorPX2 *= -2.2;
        anchorPY1 *= -diam;
        anchorPY2 *= 1.3;
    } else {
        anchorPX1 *= -2.4;
        anchorPX2 *= 2.3;
        anchorPY1 *= diam;
        anchorPY2 *= -diam;
    }
    
    ofSetColor(color);
    ofFill();
    ofDrawCircle(pos.x, pos.y, diam);
    ofDrawCurve(anchorPX1,anchorPY1,pos.x, pos.y, newPos.x, newPos.y,anchorPX2, anchorPY2);
    
    
    
    float rand = ofRandomf();
    
    if(rand >= 0){
        if(int(ofGetElapsedTimef())%2 == 1){
            if(rand <= 0.9){
                newPos.x = pos.x + cos(angle) * diam;
                newPos.y -= 4;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle);
            } else {
                newPos.x = pos.x + sin(angle) * diam;
                newPos.y -= 4;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle);
            }
        }else{
            if(rand <= 0.9){
                newPos.x = pos.x + sin(angle*2) * diam;
                newPos.y -= 4;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle);
            } else {
                newPos.x = pos.x + cos(angle*2) * diam;
                newPos.y -= 4;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle);
            }
    
        }
    }
    
//    int stemTime = ofGetElapsedTimef();
//    if(stemTime % 2 == 1){
//        pos.y -= 2;
//        Branches branchOff;
//        branchOff.setup(pos.x, pos.y, diam, color);
//    }
}