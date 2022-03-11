//
//  bird.hpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef bird_hpp
#define bird_hpp

#include "flyingObject.h"
#include "point.h"

#include <stdio.h>

class Bird : public FlyingObject
{
    
public:
    Bird(const Point &point);
    virtual void draw() const = 0;
    virtual int hit() = 0;
};

#endif /* bird_hpp */
