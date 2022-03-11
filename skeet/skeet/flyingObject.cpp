//
//  flyingObject.cpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include "flyingObject.h"
#include "velocity.h"
#include "point.h"

using namespace std;

FlyingObject::FlyingObject()
{

}

FlyingObject::FlyingObject(const Point &point)
{
    setPoint(point);
    setAlive(true);
}

void FlyingObject::advance()
{
    if(isAlive())
    {
        point.setX(point.getX() + velocity.getDx());
        point.setY(point.getY() + velocity.getDy());
    }
}

void FlyingObject::draw() const
{

}

void FlyingObject::kill()
{
    setAlive(false);
}









