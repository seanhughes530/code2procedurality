//
//  BallGreen.hpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//

#pragma once

#ifndef BallGreen_hpp
#define BallGreen_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Ball.hpp"



class BallGreen : public Ball {
public:
    virtual void draw();  //only difference from Ball class
};


#endif /* BallGreen_hpp */