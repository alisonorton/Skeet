//
//  flyingObject.hpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef flyingObject_hpp
#define flyingObject_hpp

#include "velocity.h"
#include "point.h"

#include <stdio.h>

using namespace std;

class FlyingObject
{
protected:
    Velocity velocity;
    Point point;
    bool alive;
    float radius;
    
public:
    FlyingObject();
    FlyingObject(const Point &point);
    
    
    //Getters
    Point getPoint() const {return point;}            
    Velocity getVelocity() const {return velocity;}
    bool isAlive() const {return alive;}
    float getRadius() const {return radius;}
    
    //Setters
    void setPoint(const Point point) {this->point = point;}
    void setVelocity(const Velocity velocity) {this->velocity = velocity;}
    void setAlive(const bool alive) {this-> alive = alive;}
    void setRadius(const float radius) {this->radius = radius;}
    
    //Others
    void advance();
    virtual void kill(); 
    virtual void draw() const;
};


#endif /* flyingObject_hpp */
