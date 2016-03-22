//
//  Branches.cpp
//  midtermSketch
//
//  Created by Sean Hughes on 3/10/16.
//
//

#include "Branches.hpp"


void Branches::setup(float _xPos, float _yPos, float _diam, ofColor _color, float _angle, float _speed){
    
    pos.set(_xPos, _yPos);
    diam = _diam;
    color = _color;
    angle = _angle;
    speed = _speed;
    
   
    
    ofSetColor(color);
    ofFill();
    ofSetLineWidth(5);
    
    float rand = ofRandomf();
    
    if(rand > 0){
//
//        Branches subBranch;
//        subBranch.setup(pos.x, pos.y, diam, color, angle, speed);
//         cout << pos.y << endl;
        
        //if(int(ofGetElapsedTimef())%2 == 1){
            if(rand <= 0.9){
                newPos.x = pos.x + cos(angle) * diam;
                newPos.y -= speed;
                
                cout << "position 1 y " << pos.y << endl;
                cout << "position x " << newPos.x << endl;
                cout << "position y " << newPos.y << endl;
                
                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
                //ofDrawCircle(newPos.x , newPos.y, diam);
                
                //Branches subBranch;
                setup(newPos.x, newPos.y, diam, (ofColor(ofRandom(255), ofRandom(255), ofRandom(255))), angle, speed);
//            } else {
//                newPos.x = pos.x + sin(angle) * diam;
//                newPos.y -= speed;
//                
//                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
//                //ofDrawCircle(newPos.x , newPos.y, diam);
//                
//                
//                //Branches subBranch;
//                setup(newPos.x, newPos.y, diam, color, angle, speed);
//            }
    }
//        }else{
//            if(rand <= 0.9){
//                newPos.x = pos.x + sin(angle*2) * diam;
//                newPos.y -= speed;
//                
//                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
//                //ofDrawCircle(newPos.x , newPos.y, diam);
//                
//                //Branches subBranch;
//                setup(newPos.x, newPos.y, diam, color, angle, speed);
//            } else {
//                newPos.x = pos.x + cos(angle*2) * diam;
//                newPos.y -= speed;
//                
//                ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
//                //ofDrawCircle(newPos.x , newPos.y, diam);
//                
//                //Branches subBranch;
//                setup(newPos.x, newPos.y, diam, color, angle, speed);
//            }
//
//       }
    
    }
    
    }
    
    //void Branches::update(float _xPos, float _yPos){
    
    //    ofDrawLine(pos.x, pos.y, pos.x + 3 , pos.y - speed);
    //
    //    cout << pos.y << endl;
    //
    //    //pos.set(pos.x + 3, pos.y - speed);
    //
    //    cout << newPos.y << endl;
    //
    //    newPos.set(pos.x+cos(angle)*diam, pos.y - speed);
    ////    newPos.x = pos.x + cos(angle) * diam;
    ////    newPos.y -= speed;
    //
    //    ofDrawLine(pos.x, pos.y, newPos.x, newPos.y);
    //    //ofDrawCircle(newPos.x , newPos.y, diam);
    //
    //    Branches subBranch;
    //    subBranch.update(newPos.x, newPos.y);
    
    //}
    
    //void Branches::draw(){
    
    
    
    //    //////anchor points for drawCurve///////
    //    anchorPX1 = 200;
    //    anchorPX2 = 200;
    //    anchorPY1 = 200;
    //    anchorPY2 = 200;
    //
    //    if(int(ofGetElapsedTimef())%2 == 1){
    //        anchorPX1 *= diam;
    //        anchorPX2 *= -2.2;
    //        anchorPY1 *= -diam;
    //        anchorPY2 *= 1.3;
    //    } else {
    //        anchorPX1 *= -2.4;
    //        anchorPX2 *= 2.3;
    //        anchorPY1 *= diam;
    //        anchorPY2 *= -diam;
    //    }
    
    //   ofDrawCurve(anchorPX1,anchorPY1,pos.x, pos.y, newPos.x, newPos.y,anchorPX2, anchorPY2);`
    
//}