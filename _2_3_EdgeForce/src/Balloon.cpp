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
    vel.set(ofRandom(-1,1),ofRandom(-1,1));
    size = ofRandom(10,50);
}
void Balloon::update(vector <Balloon> * bList){
    for(auto & bInst : *bList){
        if(&bInst == this){
            continue;
        }
        float length = bInst.loc.distance(loc);
        if(length-size-bInst.size < 0){
            ofVec2f target = bInst.loc - loc;
            target.normalize();
            target *= -1 * ofMap(length,size,0,1,10,true);
            acc += target;
        }
    }
    if(loc.x<size){
        acc.x+=ofMap(loc.x,size,-10,0,1);
    }
    if(loc.x>ofGetWidth()-size){
        acc.x-=ofMap(loc.x,ofGetWidth()-size,ofGetWidth()+10,0,1);
    }
    if(loc.y<size){
        acc.y+=ofMap(loc.y,size,-10,0,1);
    }
    if(loc.y>ofGetHeight()-size){
        acc.y-=ofMap(loc.y,ofGetHeight()-size,ofGetHeight()+10,0,1);
    }
    vel += acc;
    if(vel.length()> 10){
        vel.normalize();
        vel *= 10;
    }
    loc += vel;
    acc.set(0,0);
}
void Balloon::draw(vector <Balloon> * bList){
    ofSetColor(255,10);
    ofFill();

    for(auto & bInst : *bList){
        if(&bInst == this){
            continue;
        }
        float length = bInst.loc.distance(loc);
        if(length-size-bInst.size < 50){
            ofDrawLine(loc, bInst.loc);
        }
    }
//    ofNoFill();
//    ofDrawEllipse(loc, size*2, size*2);
}
void Balloon::addForce(ofVec2f force){
    force /= (size/25);
    acc += force;
}