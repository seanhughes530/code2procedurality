//
//  Ball.hpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>
#include "ofMain.h"



class Ball{
public:
    
//    void setup(float _x, float _y, float _dim);
    void setup();
    void update();
    void draw();
    
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    ofColor color;
    
    Ball();
    
private:

};




#endif /* Ball_hpp */
