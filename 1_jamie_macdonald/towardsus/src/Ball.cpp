#include "Ball.hpp"
Ball::Ball(){}

void Ball::setup(){
    ofEnableAlphaBlending();
    colMin = 0;
    colMax = 255;
    fadeOut = 0.53;
    scale = 25;
    scaleMax = 800;
    x = -50; // Position the circle offscreen
    y = -50;
    alpha = 255;
    colVariance = colMax - colMin;
    color.set(255, 0, 0, alpha);
    color.setBrightness(getNooCol());
    scaleSpeed = getScaleUpSpeed();
    leftRightSpeed = getLeftRightSpeed();
    hRad = getHRad();
    vRad = getVRad();
    hRadInc = getHRadInc();
    vRadInc = getVRadInc();
}

void Ball::update(){
    // Expand
    lr += leftRightSpeed;
    hRad += hRadInc;
    vRad += vRadInc;
    x = ofGetWindowWidth() / 2 + hRad + sin(lr * PI/180);
    y = ofGetWindowHeight() / 2 + vRad + cos(lr * PI/180);
    scale *= scaleSpeed;
}

void Ball::draw(){
    if (scale < scaleMax) {
        alpha *= fadeOut;
        ofSetColor(color);
        ofDrawCircle(x, y, scale);
    } else {
        // TODO: If alpha goes below 3 then destroy the circle
    }
}

float Ball::getNooCol(void) {
    return colMin + ofRandomf() * colVariance;
};

float Ball::getHRad(void) {
    return 4 + ofRandomf();
};

float Ball::getVRad(void) {
    return 4 + ofRandomf();
};

float Ball::getHRadInc(void) {
    return 0.1;
};

float Ball::getVRadInc(void) {
    return 0.1;
};

float Ball::getLeftRightSpeed(void) {
    return 5 + ofRandomf();
};

float Ball::getScaleUpSpeed(void) {
    return 1.001; // 1.02;
};
