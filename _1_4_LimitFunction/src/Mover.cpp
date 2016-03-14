//
//  Mover.cpp
//  _1_6_NormalVector
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#include "Mover.hpp"
Mover::Mover(){
}
void Mover::setup(){
    c = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    loc.set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
    vel.set(ofRandom(-2,2),ofRandom(-2,2));
    acc.set(0.1,0.25);
};
void Mover::update(){
    vel += acc;
    if(vel.length()>10){
        vel.normalize();
        vel *= 10;
    }
    loc += vel;
    if(loc.x > ofGetWidth() || loc.x<0){
        vel.x *= -1;
    }
    if(loc.y > ofGetHeight() || loc.y<0){
        vel.y *= -1;
    }
}
void Mover::display(){
    ofFill();
    ofSetColor(c);
    ofDrawEllipse(loc, 50, 50);
}