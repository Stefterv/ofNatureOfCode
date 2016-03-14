//
//  Walker.cpp
//  _I_6_Montecarlo
//
//  Created by Stef Tervelde on 04/02/16.
//
//

#include "Walker.hpp"
Walker::Walker(){
    tx = 1400;
    ty = 0;
}
void Walker::update(){
    float x = ofMap(ofNoise(tx),0,1,0,2880);
    float y = ofMap(ofNoise(ty),0,1,0,1800);
    
    
    tx+=0.01;
    ty+=0.01;
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