//
//  KochLine.hpp
//  HWfor3-28-breakdown
//
//  Created by Sean Hughes on 3/24/16.
//
//

#ifndef KochLine_hpp
#define KochLine_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* KochLine_hpp */

class KochLine:public ofBaseApp{
public:
    
    ofVec2f start;
    ofVec2f end;

//    KochLine(ofVec2f a, ofVec2f b){
//        start.set(a.x, a.y);
//        end.set(b.x, b.y);
//    };
    
    //    //void setup(ofVec2f a, ofVec2f b);
    void setup(ofVec2f a, ofVec2f b);
    void display();
//        ofVec2f kochA();
//        ofVec2f kochB();
//        ofVec2f kochC();
//        ofVec2f kochD();
//        ofVec2f kochE();
};