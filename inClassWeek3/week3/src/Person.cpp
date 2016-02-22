//
//  Person.cpp
//  week3
//
//  Created by Sean Hughes on 2/8/16.
//
//

#include "Person.hpp"
#include "ofMain.h"

//Person::Person(){
//    height = 10;
//    smell = "good";
//    name = "Jimbo";
//    
//}


void Person::walk(){
    cout << "I'm Walking!" << endl;  //print to console
    
}

void Person::sleep(){
    cout << "I'm Sleeping!" << endl;
    
}

void Person::talk(){
    cout << "Im Talking!" << endl;
    
}

void Person::eat(){
    cout << "I'm Eating!" << endl;
    
}

void Person::draw(float xPos, float yPos){
    cout << "I'm Drawing" << endl;
    ofDrawEllipse(xPos, yPos, height, height);
    
    ofSetColor(r, g, b);
    ofFill();
    ofDrawEllipse(xPos, yPos, height, height);
    
}