//
//  Particle.cpp
//  particleSystem
//
//  Created by Sean Hughes on 4/11/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    
    live = false;
    
}

ofPoint Particle::randomPointInCircle(float maxRad){
    
    ofPoint pnt;
    float rad = ofRandom(0,maxRad);
    float angle = ofRandom(0,TWO_PI);
    pnt.x = rad * cos(angle);
    pnt.y = rad * sin(angle);
    return pnt;
    
}

void Particle::setup(){
    
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
    
}

void Particle::update(float dt){
    
    if(live){
        
        //rotate vel
        vel.rotate(0, 0, param.rotate * dt);
        
        
        ofPoint acc;  //acceleration
        ofPoint delta = pos - param.eCenter;  //distance between particle and emitter
        float len = delta.length();  //length of delta
        
        if(ofInRange(len, 0, param.eRad)){
            delta.normalize();
            
            //attraction and repulsion forces
            acc += delta * param.force;  //multiply makes movement in direction of delta (because of normalize)
            
            //spinning forces
            acc.x += delta.x * param.spin;
            acc.y += delta.y * param.spin;
            
        }
        
        
        vel += acc * dt;
        
        //friction
        vel *= (1 - param.friction);
        
        
        //update pos
        pos += vel * dt;
        
        //update time and check if should die
        time += dt;
        
        if(time >= lifeTime){
            live = false;
        }
    
    }
    
}

void Particle::draw(){
    
    if(live){
        float size = ofMap(time, 0, lifeTime, 1, 3);
        
        ofColor color = ofColor::red;
        float hue = ofMap(time, 0, lifeTime, 100, 255);
        color.setHue(hue);
        ofSetColor(color);
        
        ofDrawCircle(pos, size);
        
        cout << "this is happening" << endl; 
    }
    
}



