#pragma once

#include "ofMain.h"
#include "Boid.hpp"
#include "Food.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //Boid boids;
    Food food;
    
    float hunger;
    float time;
    ofVec2f force;
    ofVec2f target;
    ofVec2f point;
    
    vector<Boid> flock;
    vector<Boid> predators;
    vector<Food> allFood;
		
    ofImage myImage;
    void lookForFood();
    void predatorAction();
    void checkForDeath();
    void checkForLife();
};
