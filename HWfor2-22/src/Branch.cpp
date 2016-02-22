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


void Branch::draw(float xPos, float yPos){
    cout << "I'm a rain drop!" << endl;
    
    ofSetColor(0);
    ofFill();
    ofDrawTriangle(xPos, yPos, xPos-10, yPos+20, xPos+10, yPos+20);
    ofDrawEllipse(xPos,yPos+22,20,20);
}
