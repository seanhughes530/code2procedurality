//
//  Branch.hpp
//  midTermRedone
//
//  Created by Sean Hughes on 3/17/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Branch_hpp */


class Branch : public ofBaseApp{
public:
    void setup(float _xPos, float _yPos);

private:
    float xPos;
    float yPos;
    float newX;
    float newY;
    float speed;
    
};