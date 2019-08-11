#include "ofApp.h"

// TODO: Figure out if you can swap depths

void ofApp::setup(){
    ofSetBackgroundColor(0, 0, 0, 255);
    
    // Calling the object's setup method
    for(int i=0; i<NBALLS; i++){
        groupOfBalls[i].setup();
    }
}

void ofApp::update(){
    // Calling the object's update method
    for(int i=0; i<NBALLS; i++){
        groupOfBalls[i].update();
    }
}

void ofApp::draw(){
    // Call the draw method to draw the object
    for(int i=0; i<NBALLS; i++){
        groupOfBalls[i].draw();
    }
}
