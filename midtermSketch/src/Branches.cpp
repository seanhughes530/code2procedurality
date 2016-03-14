//
//  Branches.cpp
//  midtermSketch
//
//  Created by Sean Hughes on 3/10/16.
//
//

#include "Branches.hpp"


void Branches::setup(float _xPos, float _yPos, float _diam, ofColor _color, float _angle, float _speed){
    
    pos.set(_xPos, _yPos);
    diam = _diam;
    color = _color;
    angle = _angle;
    speed = _speed;
    
    
//    //////anchor points for drawCurve///////
//    anchorPX1 = 200;
//    anchorPX2 = 200;
//    anchorPY1 = 200;
//    anchorPY2 = 200;
//    
//    if(int(ofGetElapsedTimef())%2 == 1){
//        anchorPX1 *= diam;
//        anchorPX2 *= -2.2;
//        anchorPY1 *= -diam;
//        anchorPY2 *= 1.3;
//    } else {
//        anchorPX1 *= -2.4;
//        anchorPX2 *= 2.3;
//        anchorPY1 *= diam;
//        anchorPY2 *= -diam;
//    }
    
//   ofDrawCurve(anchorPX1,anchorPY1,pos.x, pos.y, newPos.x, newPos.y,anchorPX2, anchorPY2);
   
    
    ofSetColor(color);
    ofFill();
    ofSetLineWidth(5);

//    ofDrawLine(pos.x, pos.y, pos.x + 3 , pos.y - speed);
//    cout << pos.y << endl;
//    
//    pos.set(pos.x + 3, pos.y - speed);
//    
//
//    cout << pos.y << endl;
    
    
    float rand = ofRandomf();
    
    if(rand >= 0){
        
//        Branches subBranch;
//        subBranch.setup(pos.x, pos.y, diam, color, angle, speed);
        
        
        if(int(ofGetElapsedTimef())%2 == 1){
            if(rand <= 0.9){
                newPos.x = pos.x + cos(angle) * diam;
                newPos.y -= speed;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle, speed);
                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
                ofDrawCircle(newPos.x , newPos.y, diam);
            } else {
                newPos.x = pos.x + sin(angle) * diam;
                newPos.y -= speed;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle, speed);
                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
                ofDrawCircle(newPos.x , newPos.y, diam);
            }
        }else{
            if(rand <= 0.9){
                newPos.x = pos.x + sin(angle*2) * diam;
                newPos.y -= speed;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle, speed);
                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
                ofDrawCircle(newPos.x , newPos.y, diam);
            } else {
                newPos.x = pos.x + cos(angle*2) * diam;
                newPos.y -= speed;
                Branches subBranch;
                subBranch.setup(newPos.x, newPos.y, diam, color, angle, speed);
                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
                ofDrawCircle(newPos.x , newPos.y, diam);
            }

       }
    }
    
}