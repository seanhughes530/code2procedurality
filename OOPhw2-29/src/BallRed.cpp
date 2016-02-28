//
//  BallRed.cpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//

#include "BallRed.hpp"

void BallRed::draw(){
    ofSetColor(ofColor::red);  //shortcut for full blue color
    ofDrawCircle(x,y,dim);
}