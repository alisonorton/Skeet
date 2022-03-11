//
//  bird.cpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include "bird.h"
#include "uiDraw.h"
#include "flyingObject.h"

using namespace std;


Bird::Bird(const Point &point) : FlyingObject(point)
{
    velocity.setDx(random(3, 7));
    
    if (point.getY() > 0)
    {
        velocity.setDy(random(-4,0));
    }
    else
    {
        velocity.setDy(random(0,5));
    }
}

int Bird::hit()
{
    kill();
    return 0;
}


void Bird::draw() const
{

}



