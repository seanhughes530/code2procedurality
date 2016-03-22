//
//  Branch.hpp
//  inClassTree3-7
//
//  Created by Sean Hughes on 3/7/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Branch_hpp */

class Branch : public ofBaseApp {
    //parameters
public:
    
    //constructor
    
    //methods
    void setup(
        float _xPos,
        float _yPos,
        float _length,
        float _width,
        float _splitPercentage,
        float _maxSplitAngle,
        float _maxSubdivisions,
        float _maxSegments,
        float _segmentsSinceStart,
        float _angle,
        float _curvature,
        ofColor _color
    );
    
private:
    float xPos, yPos; //position
    float length;  //length and width of branches
    float width;
    float splitPercentage;  //perc my branch will actually split
    float maxSplitAngle;
    float maxSubdivisions;
    float maxSegments;
    float segmentsSinceStart;
    float angle;
    float curvature;  //give curvature to branhces
    ofColor color; //color of the branch
    bool split;  //flip state1 and state2
    
};