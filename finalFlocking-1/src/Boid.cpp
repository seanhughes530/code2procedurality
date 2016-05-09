//
//  Boid.cpp
//  finalFlocking-1
//
//  Created by Sean Hughes on 4/25/16.
//
//
////Thank you shiffman for all of the processing code I based a lot of this off of////
////https://github.com/shiffman/The-Nature-of-Code-Examples/tree/master/chp06_agents/NOC_6_09_Flocking
////
////As well as The Nature of Code for more code reference as well as explanations////
////http://natureofcode.com/book/chapter-6-autonomous-agents/

#include "Boid.hpp"

Boid::Boid(){
    acceleration.set(0, 0);
    velocity.set(0, 0);
    
    rad = 3.0;
    maxSpeed = 4;
    maxForce = 0.1;
    
    lifeSpan = 300;
    
}

void Boid::setup(float x, float y){

    location.set(x,y);
    
    color.r = (255);
    color.g = (255);
    color.b = (255);
    

}


void Boid::update(){
    velocity += acceleration;
    velocity.limit(maxSpeed);
    location += velocity;
    acceleration *= 0;
    lifeSpan -= 0.1;
    
    if(location.x > ofGetWidth()){
        location.x = 0;
    }
    if(location.y > ofGetHeight()){
        location.y = 0;
    }
    if(location.x < 0){
        location.x = ofGetWidth();
    }
    if(location.y < 0){
        location.y = ofGetHeight();
    }

}

void Boid::applyForce(ofVec2f force){
    acceleration += force;
}

void Boid::seek(ofVec2f target){
    float d = location.distance(target);
    
    if(d <= 100){
        ofVec2f desired;
        ofVec2f steer;
    
        desired = target - location;
    
        desired.normalize();
        desired *= maxSpeed;
    
        steer = desired - velocity;

        steer.limit(maxForce);
        applyForce(steer);
    }
}

void Boid::avoid(ofVec2f target){
    ofVec2f desired;
    ofVec2f steer;
    
    desired = target - location;
    //    desired -= (target,location);
    
    desired.normalize();
    desired *= maxSpeed;
    
    steer = desired - velocity;
    //    steer -= (desired,velocity);
    
    steer.limit(maxForce);
    applyForce(-steer);
}

void Boid::arrive(ofVec2f target){
    ofVec2f desired;
    ofVec2f steer;
    
    desired = target - location;
    
    float d = location.distance(target);
    desired.normalize();
    
    if(d < 100){
        float m = ofMap(d, 0, 100, 0, maxSpeed);
        desired *= m;
    } else {
        desired *= maxSpeed;
    }
    
    steer = desired - velocity;
    steer.limit(maxForce);
    applyForce(steer);
    
    
}

void Boid::display(){
    float angle = (float)atan2(-velocity.y, velocity.x);
    float theta = -1.0 * angle;
    float heading2D = ofRadToDeg(theta) + 90;
    
    ofPushStyle();
    ofFill();
    
    ofPushMatrix();
    
    //    myImage.load("cats.jpg");
    //    myImage.draw(0,0,rad*5, rad*10);
    
    ofTranslate(location.x, location.y);
    
    ofRotateZ(heading2D);
    ofSetColor(color);
    
    ofDrawEllipse(0, -rad*2, 7, 12);
    
    ofBeginShape();
    ofVertex(0, -rad*2);
    ofVertex(-rad, rad*2);
    ofVertex(rad, rad*2);
    ofEndShape();
    
    ofPopMatrix();
    ofPopStyle();
    
}

