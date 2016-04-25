//
//  Params.hpp
//  particleSystem
//
//  Created by Sean Hughes on 4/11/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>

#endif /* Params_hpp */

#include "ofMain.h"

class Params{
public:
    void setup();
    ofPoint eCenter;  //center of emitter
    float eRad;  //size of emitter
    float velRad;  //bound on particles vel
    float lifeTime;  //max lifetime
    float time;  //time since birth
    float rotate;
    
    float force;  //attraction and repulsion
    float spin;  //rotating force
    float friction;  //friction force
};