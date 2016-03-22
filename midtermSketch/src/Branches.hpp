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


class Branches : public ofBaseApp{
public:
    void setup(float _xPos, float _yPos, float _diam, ofColor _color, float _angle, float _speed);
    //void update(float _xPos, float _yPos);
    //void draw();
    
private:
    ofVec2f pos;
    ofVec2f newPos;
    float diam;
    float transPos;
    float angle;
    float anchorPX1, anchorPY1;
    float anchorPX2, anchorPY2;
    float speed;
    ofColor color;
};