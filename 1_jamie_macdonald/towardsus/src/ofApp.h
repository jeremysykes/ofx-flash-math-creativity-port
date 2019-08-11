#pragma once

#include "ofMain.h"
#include "Ball.hpp"

#define NBALLS 10

class ofApp : public ofBaseApp{

	public:
        Ball groupOfBalls[NBALLS];
//        float frequency; // TODO: Implement or remove
//        float depth; // TODO: Implement or remove
		void setup();
		void update();
		void draw();
};
