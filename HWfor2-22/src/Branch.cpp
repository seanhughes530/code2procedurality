//
//  Branch.cpp
//  HWfor2-22
//
//  Created by Sean Hughes on 2/21/16.
//
//

#include "Branch.hpp"
#include "ofMain.h"

void Branch::sway(){
    
}


void Branch::draw(float xPos, float yPos, float size){
    cout << "I'm a rain drop!" << endl;
    
    ofSetColor(0);
    ofFill();
    ofDrawTriangle(xPos, yPos, xPos-(size/2), yPos+size, xPos+(size/2), yPos+size);
    ofDrawEllipse(xPos,yPos+(size*1.1),size,size);
}
