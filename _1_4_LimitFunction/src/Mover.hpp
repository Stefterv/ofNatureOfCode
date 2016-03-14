//
//  Mover.hpp
//  _1_6_NormalVector
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
    ofVec2f loc;
    ofVec2f vel;
    ofVec2f acc;
    ofColor c;
    Mover();
    void setup();
    void update();
    void display();
    
};
#endif /* Mover_hpp */
