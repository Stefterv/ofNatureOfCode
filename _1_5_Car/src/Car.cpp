//
//  Car.cpp
//  _1_5_Car
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#include "Car.hpp"
void Car::setup(){
    loc.set(ofGetWidth()/2,ofGetHeight()/2);
    vel.set(0,0);
    acc.set(0,0);
}
void Car::update(){
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
void Car::draw(){
    ofFill();
    ofColor(255);
    ofDrawRectangle(loc, 50, 35);
}