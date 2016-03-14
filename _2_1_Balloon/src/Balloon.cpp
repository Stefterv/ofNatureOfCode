//
//  Balloon.cpp
//  _2_1_Balloon
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#include "Balloon.hpp"
void Balloon::setup(){
    loc.set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
    size = ofRandom(10,50);
}
void Balloon::update(){
    vel += acc;
    if(vel.length()> 10){
        vel.normalize();
        vel *= 10;
    }
    loc += vel;
    if(loc.x < size){
        vel.x *= -0.75;
        loc.x = size;
    }
    if(loc.x > ofGetWidth()-size){
        vel.x *= -0.75;
        loc.x = ofGetWidth()-size;
    }
    if(loc.y < size){
        vel.y *= -0.75;
        loc.y = size;
    }
    if(loc.y > ofGetHeight()-size){
        vel.y *= -0.75;
        loc.y = ofGetHeight()-size;
    }
    acc.set(0,0);
}
void Balloon::draw(){
    ofSetColor(255);
    ofFill();
    ofDrawEllipse(loc, size*2, size*2);
}
void Balloon::addForce(ofVec2f force){
    acc += force;
}