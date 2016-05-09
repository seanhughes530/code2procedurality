//
//  Boid.hpp
//  finalFlocking-1
//
//  Created by Sean Hughes on 4/25/16.
//
//

#ifndef Boid_hpp
#define Boid_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Boid_hpp */


class Boid{
public:
  
    //constructor
    Boid();
    
    //methods
    void setup(float x, float y);
    void update();
    void applyForce(ofVec2f force);
    void seek(ofVec2f target);
    void avoid(ofVec2f target);
    void arrive(ofVec2f target);
    void display();
    
    //variables
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    
    float maxSpeed;
    float maxForce;
    float rad;
    float lifeSpan;
    ofColor color;
    
//    ofImage myImage;
    
};