//
//  Walker.hpp
//  _I_6_Montecarlo
//
//  Created by Stef Tervelde on 04/02/16.
//
//

#ifndef Walker_hpp
#define Walker_hpp

#include <stdio.h>
#include <ofMain.h>
class Walker{
public:
    int x;
    int y;
    ofPolyline line;
    void update();
    void draw();
    Walker();
    float getRandom();
};

#endif /* Walker_hpp */
