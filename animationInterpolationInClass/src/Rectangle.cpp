//
//  Rectangle.cpp
//  animationInterpolationInClass
//
//  Created by Sean Hughes on 3/28/16.
//
//

#include "Rectangle.hpp"

Rectangle::Rectangle(){
    //point A is (10,10)
    posA.x = 10;
    posA.y = 10;
    
    //point B is (1000,10)
    posB.x = 1000;
    posB.y = 10;
    
    catchUpSpeed = 0.01;
}

void Rectangle::interpolate(float myPct){
//    /////linear interpolation
//    pos.x = (1 - myPct)*posA.x + myPct*posB.x;
//    pos.y = (1 - myPct)*posA.y + myPct*posB.y;

    //////interpolation with powers
    pct = powf(cos(myPct), 5);
    pos.x = (1 - pct)*posA.x + pct*posB.x;
    pos.y = (1 - pct)*posA.y + pct*posB.y;
    
    
    cout << "pos.x " << pos.x << endl;
    cout << "pos.y " << pos.y << endl;
}

void Rectangle::zeno(float catchX, float catchY){
    pos.x = catchUpSpeed * catchX + (1 - catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1 - catchUpSpeed) * pos.y;
    
    cout << "pos.x " << pos.x << endl;
    cout << "pos.y " << pos.y << endl;
}

void Rectangle::draw(){
    ofDrawRectangle(pos.x, pos.y, 100, 100);
    
}