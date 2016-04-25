//
//  Params.cpp
//  particleSystem
//
//  Created by Sean Hughes on 4/11/16.
//
//

#include "Params.hpp"

void Params::setup(){
    
    eCenter = ofPoint(ofGetWidth()/2,ofGetHeight()/2);
    eRad = 150;
    velRad = 100;
    lifeTime = 1.0; //in seconds
    rotate = 90;
    
    force = 500;
    spin = 1000;
    friction = 0.15;  //between 0 and 1 always
    
}