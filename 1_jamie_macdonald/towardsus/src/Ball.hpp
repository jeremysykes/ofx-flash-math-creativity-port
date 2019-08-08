#ifndef _BALL // if this class hasn't been defined, the program can define it
#define _BALL // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework
class Ball {

public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void setup(); // setup method, use this to setup your object's initial state
    void update(); // update method, used to refresh your objects properties
    void draw(); // draw method, this where you'll do the object's drawing
    float getHRad(void);
    float getVRad(void);
    float getHRadInc(void);
    float getVRadInc(void);
    float getLeftRightSpeed(void);
    float getScaleUpSpeed(void);
    float getScaleDownSpeed(void);
    float getNooCol(void);
    
    // variables
    float x;
    float y;
    float lr;
    float alpha;
    float fadeOut;
    float scale;
    float scaleMax;
    float scaleSpeed;
    float leftRightSpeed;
    float hRad;
    float hRadInc;
    float vRad;
    float vRadInc;
    float colMin;
    float colMax;
    float colVariance;
    ofColor color;
    
    Ball(); // Constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private:
    // Place private functions or variables declarations here
};
#endif
