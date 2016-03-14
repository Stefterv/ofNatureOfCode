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
    distribution = *new std::normal_distribution<float>(10, 5);
}
void Walker::display(){
    line.draw();
}
void Walker::update(){
    float dir = ofRandom(TWO_PI);
    float dist = abs(distribution(generator));
    x+=cos(dir)*dist;
    y+=sin(dir)*dist;
    line.addVertex(x,y);
}