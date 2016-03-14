//
//  Car.hpp
//  _1_5_Car
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#ifndef Mover_hpp
#define Mover_hpp

#include "ofMain.h"
#include <stdio.h>
class Mover{
public:
    void setup();
    void update();
    void draw();
    
    
    ofVec2f loc;
    ofVec2f vel;
    ofVec2f acc;
};

#endif /* Car_hpp */
