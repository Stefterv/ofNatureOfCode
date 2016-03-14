//
//  Walker.cpp
//  1_1 Random Walk
//
//  Created by Stef Tervelde on 03/02/16.
//
//
#include "ofMain.h"
#include "ofMath.h"
#include "Walker.hpp"
Walker::Walker(){
    x = 512;
    y = 512;
}
void Walker::display(){
    line.draw();
}
void Walker::update(){
    float dir = ofRandom(1);
    if(dir < 0.5){
        ofVec2f mouse(ofGetMouseX()-x,ofGetMouseY()-y);
        mouse.limit(3);
        x+=mouse.x;
        y+=mouse.y;
    }else{
        dir = ofRandom(TWO_PI);
        x+=cos(dir);
        y+=sin(dir);
    }
    line.addVertex(x,y);
}