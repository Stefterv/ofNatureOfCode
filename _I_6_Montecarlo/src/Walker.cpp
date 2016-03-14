//
//  Walker.cpp
//  _I_6_Montecarlo
//
//  Created by Stef Tervelde on 04/02/16.
//
//

#include "Walker.hpp"
Walker::Walker(){
    x = 1400;
    y = 900;
}
void Walker::update(){
    float dist = getRandom()*15;
    float r = ofRandom(TWO_PI);
    x+=cos(r)*dist;
    y+=sin(r)*dist;
    line.addVertex(x,y);
}
void Walker::draw(){
    line.draw();
}
float Walker::getRandom(){
    while(true){
        float r1 = ofRandom(1);
        if(r1<ofRandom(1)){
            return r1;
        }
    }
}