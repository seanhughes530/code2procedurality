//
//  Particle.hpp
//  particleSystem
//
//  Created by Sean Hughes on 4/11/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>

#endif /* Particle_hpp */

#include "ofMain.h"
#include "Params.hpp"


class Particle{
public:
    //constructor
    Particle();
    
    //methods
    void setup();
    void update(float dt);
    void draw();
    
    //variables
    Params param;  //instance of Params in the class
    ofPoint pos;  //position of particle
    ofPoint vel;  //speed of particle
    float time;   //how long the particle has been living
    float lifeTime;  //max time the particle can live
    bool live;  //checks if particle is alive or dead
    ofPoint randomPointInCircle(float maxRad);  //random point in circle
};