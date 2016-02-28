//
//  BallGreen.cpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//

#include "BallGreen.hpp"

void BallGreen::draw(){
    ofSetColor(ofColor::green);  //shortcut for full blue color
    ofDrawCircle(x,y,dim);
}