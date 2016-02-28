//
//  BallRed.hpp
//  OOPhw2-29
//
//  Created by Sean Hughes on 2/28/16.
//
//

#pragma once

#ifndef BallRed_hpp
#define BallRed_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Ball.hpp"



class BallRed : public Ball {
public:
    virtual void draw();  //only difference from Ball class
};


#endif /* BallRed_hpp */