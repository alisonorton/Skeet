//
//  sacredBird.cpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include "sacredBird.h"
#include "bird.h"
#include "uiDraw.h"



SacredBird::SacredBird(const Point &point) : Bird(point)
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

//Draw Sacred Bird
void SacredBird::draw() const
{
    drawSacredBird(point, 15);
}

//The Bird is dead, and the user looses 10 points
int SacredBird::hit()
{
    kill();
    return -10;
}










