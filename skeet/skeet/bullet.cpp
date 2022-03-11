//
//  bullet.cpp
//  skeet
//
//  Created by Alison Orton on 2/28/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include "bullet.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include "point.h"
#include <cmath>

#define BULLET_SPEED 10.0


using namespace std;

Bullet::Bullet()
{
    setAlive(true);
}

void Bullet::draw() const
{
    if(isAlive())
    {
        drawDot(point);
    }
}

void Bullet::fire(const Point point, const float angle)
{
    float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
    float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));
    
    velocity.setDx(dx);
    velocity.setDy(dy);
    
    this->point.setX(point.getX());
    this->point.setY(point.getY());
}












