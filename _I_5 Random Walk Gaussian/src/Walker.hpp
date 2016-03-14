//
//  Walker.hpp
//  1_1 Random Walk
//
//  Created by Stef Tervelde on 03/02/16.
//
//

#ifndef Walker_hpp
#define Walker_hpp

#include <stdio.h>
#include <random>
#include <iostream>

class Walker{
public:
    int x;
    int y;
    ofPolyline line;
    Walker();
    void display();
    void update();
    std::default_random_engine generator;
    std::normal_distribution<float> distribution;
};

#endif /* Walker_hpp */
