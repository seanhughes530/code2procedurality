//
//  Rectangle.hpp
//  animationInterpolationInClass
//
//  Created by Sean Hughes on 3/28/16.
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Rectangle_hpp */


class Rectangle{
public:
    //variables/properties
    float pct;
    ofPoint posA;  //point A
    ofPoint posB;  //point B
    ofPoint pos;  //output Point
    float catchUpSpeed;
    
    //constructor
    Rectangle();
    
    //methods
    void interpolate(float myPct);
    void draw();
    void zeno(float catchX, float catchY);
};