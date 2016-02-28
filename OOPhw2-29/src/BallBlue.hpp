//
//  BallBlue.hpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//
#pragma once

#ifndef BallBlue_hpp
#define BallBlue_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Ball.hpp"



class BallBlue : public Ball {
    public:
    virtual void draw();  //only difference from Ball class
};


#endif /* BallBlue_hpp */
