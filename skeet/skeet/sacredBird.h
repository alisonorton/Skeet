//
//  sacredBird.hpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef sacredBird_hpp
#define sacredBird_hpp

#include "bird.h"

#include <stdio.h>

class SacredBird : public Bird
{
private:
    int life;
    
public:
    SacredBird(const Point &point);
    void draw() const;
    int hit();
};

#endif /* sacredBird_hpp */
