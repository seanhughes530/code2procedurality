//
//  Food.cpp
//  finalFlocking-1
//
//  Created by Sean Hughes on 5/5/16.
//
//

#include "Food.hpp"


Food::Food(){
    
    
}

void Food::setup(float x, float y){
    
    location.set(x,y);
    rad = 4;
    
}

void Food::draw(){
    
    ofSetColor(0, 255, 0);
    ofFill();
    ofDrawCircle(location.x, location.y, rad);
    
}