//
//  standardBird.cpp
//  skeet
//
//  Created by Alison Orton on 3/5/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include "standardBird.h"
#include "uiDraw.h"


StandardBird::StandardBird(const Point &point) : Bird(point)
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

//Draw standard bird
void StandardBird::draw() const
{
    drawCircle(point, 10.0);
}


//Hit and kill standard bird
int StandardBird::hit()
{
    kill();
    return 1;
}
