//
//  Branches.hpp
//  midtermSketch
//
//  Created by Sean Hughes on 3/10/16.
//
//

#ifndef Branches_hpp
#define Branches_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Branches_hpp */


class Branches{
public:
    void setup(float _xPos, float _yPos, float _diam, ofColor _color, float _angle);
    
private:
    ofVec2f pos;
    float diam;
    ofColor color;
    float transPos;
    ofVec2f newPos;
    float angle;
    float anchorPX1, anchorPY1;
    float anchorPX2, anchorPY2;
};