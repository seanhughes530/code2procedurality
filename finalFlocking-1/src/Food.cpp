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
    
    ofSetColor(203,228,145);
    ofFill();
    ofDrawCircle(location.x, location.y, rad);
    
}