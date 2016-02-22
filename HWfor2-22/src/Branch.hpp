//
//  Branch.hpp
//  HWfor2-22
//
//  Created by Sean Hughes on 2/21/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>

#endif /* Branch_hpp */

#include "ofMain.h"

class Branch{
public:
    int r,g,b;
    float speed;
    
    void sway();
    void draw(float xPos, float yPos);
};