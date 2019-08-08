#include "ofApp.h"

// TODO: Figure out if you can swap depths

void ofApp::setup(){
    ofSetBackgroundColor(0, 0, 0, 255);
    frequency = 10;
    depth = 0;
    
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
    
    // TODO: Refactor - Need to take an item from 'groupOfBalls' array and display it on a random interval
    //    if (floor(ofRandomf() * frequency) == 0) {
    //        depth++;
    //        // path.scaleSpeed = 0;
    //        path.draw();
    //        path.close();
    //    }
}
