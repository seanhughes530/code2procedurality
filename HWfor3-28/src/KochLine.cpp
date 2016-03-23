//
//  KochLine.cpp
//  HWfor3-28
//
//  Created by Sean Hughes on 3/22/16.
//
//

#include "KochLine.hpp"



ofVec2f start;
ofVec2f ending;
    
    
void KochLine::display(){
    ofSetColor(0);
    ofNoFill();
    
    ofDrawLine(start.x, start.y, ending.x, ending.y);
}

ofVec2f kochA(){
    return start;
}

ofVec2f kochE(){
    return ending;
}

ofVec2f kochB(){
    ofVec2f v;
    v = (ending,start);
    v /= 3;
    v += start;
    return v;
}

ofVec2f kochD(){
    ofVec2f v;
    v = (ending,start);
    v *= (2/3);
    v += start;
    return v;
}

ofVec2f kochC() {
    ofVec2f a = start;
    
    ofVec2f v = (ending, start);
    v /= 3;
    a += v;
    
    ofRotate(ofRadToDeg(-60));
    a += v;
    
    return a;
}