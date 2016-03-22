#pragma once

#include "ofMain.h"
#include "Branch.hpp"

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
    void recursionFunc(float _xPos, float _yPos);
    void drawRecursiveBackground(float length, float theta);
    void drawBackgrounds();
    
    float xPos;
    float yPos;
    float x;
    float y;
    float transX;
    float transY;
    
    Branch one;
		
};
