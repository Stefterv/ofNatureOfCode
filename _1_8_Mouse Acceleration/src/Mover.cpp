//
//  Car.cpp
//  _1_5_Car
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#include "Mover.hpp"
void Mover::setup(){
    loc.set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
    vel.set(0,0);
    acc.set(0,0);
    s = ofRandom(1,2);
    e = ofRandom(2,50);
}
void Mover::update(){
    ofVec2f target(ofGetMouseX()-loc.x,ofGetMouseY()-loc.y);
    float length = target.length();
    target.normalize();
    target *= ofMap(length,0,500,s,e);
    acc = target;
    vel+=acc;
    if(vel.length() > 10){
        vel.normalize();
        vel *= 10;
    }
    loc+=vel;
    if(loc.x>ofGetWidth()){
        loc.x = 0;
    }
    if(loc.x<0){
        loc.x = ofGetWidth();
    }
    if(loc.y>ofGetHeight()){
        loc.y = 0;
    }
    if(loc.y<0){
        loc.y = ofGetHeight();
    }
}
void Mover::draw(){
    ofFill();
    ofColor(255);
    ofDrawEllipse(loc, 50, 50);
}