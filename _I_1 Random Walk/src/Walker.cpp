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
    int dir = int(ofRandom(4));
    if(dir == 0){
        x++;
    }
    if(dir == 1){
        y++;
    }
    if(dir == 2){
        x--;
    }
    if(dir == 3){
        y--;
    }
    line.addVertex(x,y);
}