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
    void setup(float _xPos, float _yPos, float _diam, ofColor _color);
    
private:
    ofVec2f pos;
    float diam;
    ofColor color
};