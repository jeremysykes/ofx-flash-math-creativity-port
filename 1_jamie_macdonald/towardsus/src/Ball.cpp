#include "Ball.hpp"
Ball::Ball(){}

void Ball::setup(){
    ofEnableAlphaBlending();
    colMin = 64;
    colMax = 255;
    fadeOut = 0.53;
    frequency = 32;
    scale = 25;
    scaleMax = 300;
    x = -50;
    y = -50;
    alpha = 64;
    colVariance = colMax - colMin;
    color.set(getNooCol(), getNooCol(), getNooCol(), alpha);
    scaleSpeed = getScaleUpSpeed();
    leftRightSpeed = getLeftRightSpeed();
    hRad = getHRad();
    vRad = getVRad();
    hRadInc = getHRadInc();
    vRadInc = getVRadInc();
}

void Ball::update(){
    if (floor(ofRandomf() * frequency) == 0) {
        lr += leftRightSpeed;
        hRad += hRadInc;
        vRad += vRadInc;
        x = ofGetWidth() / 2 + hRad + sin(lr * PI/180);
        y = ofGetHeight() / 2 + vRad + cos(lr * PI/180);
        scale *= scaleSpeed;
    }
}

void Ball::draw(){
    if (scale < scaleMax) {
        alpha *= fadeOut;
        ofSetColor(color);
        ofSetCircleResolution(100);
        ofDrawCircle(x, y, scale);
    } else {
        setup();
    }
}

float Ball::getNooCol(void) {
    return colMin + ofRandomf() * colVariance;
};

float Ball::getHRad(void) {
    return ofRandom(-20, 20);;
};

float Ball::getVRad(void) {
    return 0;
};

float Ball::getHRadInc(void) {
    return ofRandom(-20, 20);
};

float Ball::getVRadInc(void) {
    return 0;
};

float Ball::getLeftRightSpeed(void) {
    return 1 + ofRandomf();
};

float Ball::getScaleUpSpeed(void) {
    return 1.2;
};
