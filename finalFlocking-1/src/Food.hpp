//
//  Food.hpp
//  finalFlocking-1
//
//  Created by Sean Hughes on 5/5/16.
//
//

#ifndef Food_hpp
#define Food_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Food_hpp */


class Food{
public:
    
    Food();
    
    void setup(float x, float y);
    void draw();
    
    ofVec2f location;
    float rad;
};