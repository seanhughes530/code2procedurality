//
//  KochLine.hpp
//  HWfor3-28
//
//  Created by Sean Hughes on 3/22/16.
//
//

#ifndef KochLine_hpp
#define KochLine_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* KochLine_hpp */

class KochLine:public ofBaseApp{
public:
    
    KochLine(ofVec2f a, ofVec2f b){
        start.set(a.x, a.y);
        end.set(b.x, b.y);
    };
    
    ofVec2f start;
    ofVec2f end;
    
    void setup(ofVec2f a, ofVec2f b);
    void display();
    ofVec2f kochA();
    ofVec2f kochB();
    ofVec2f kochC();
    ofVec2f kochD();
    ofVec2f kochE();
};