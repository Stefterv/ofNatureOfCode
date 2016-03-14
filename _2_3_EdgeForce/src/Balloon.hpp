//
//  Balloon.hpp
//  _2_1_Balloon
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#ifndef Balloon_hpp
#define Balloon_hpp

#include <stdio.h>
#include "ofMain.h"
class Balloon{
public:
    void setup();
    void update(vector <Balloon> * bList);
    void draw(vector <Balloon> * bList);
    void addForce(ofVec2f force);
    
    ofVec2f loc;
    ofVec2f vel;
    ofVec2f acc;

    
    float size;
};
#endif /* Balloon_hpp */
