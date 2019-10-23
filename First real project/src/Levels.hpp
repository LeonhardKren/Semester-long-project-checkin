//
//  Levels.hpp
//  First real project
//
//  Created by Leonhard Kren on 15/10/19.
//

#ifndef Levels_hpp
#define Levels_hpp

#include <stdio.h>
#include "Jump.h"
#include "Platform.h"

class Level
{
public:
    void setup();
    void istouching(Jumping*hop);
    void level1(Jumping* player);
    void level2(Jumping* player);
    
    
    Platform Platforms[100];
    int level;

};

#endif /* Levels_hpp */
