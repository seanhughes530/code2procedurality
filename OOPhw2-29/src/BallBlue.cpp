//
//  BallBlue.cpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//

#include "BallBlue.hpp"

void BallBlue::draw(){
    ofSetColor(ofColor::blue);  //shortcut for full blue color
    ofDrawCircle(x,y,dim);
}