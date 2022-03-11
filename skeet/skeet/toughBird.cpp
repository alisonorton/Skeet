//
//  toughBird.cpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include "toughBird.h"
#include "flyingObject.h"
#include "uiDraw.h"

ToughBird::ToughBird(const Point &point) : Bird(point)
{
    life = 3;
    
    setRadius(10.0);
    
    velocity.setDx(random(2, 4));
    
    if (point.getY() > 0)
    {
        velocity.setDy(random(-2,0));
    }
    else
    {
        velocity.setDy(random(0,3));
    }
};


//Drawing the tough bird
void ToughBird::draw() const
{
    drawToughBird(point, radius, life);
}


int ToughBird::hit()
{
    
    if (life > 1)
    {
        life--;
        return 1;
    }
    else if (life == 1)
    {
        kill();
        return 3;
    }
    
    return 0;
}







