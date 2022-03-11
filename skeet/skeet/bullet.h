//
//  bullet.hpp
//  skeet
//
//  Created by Alison Orton on 2/28/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef bullet_hpp
#define bullet_hpp

#include "flyingObject.h"
#include "point.h"

#include <stdio.h>

class Bullet : public FlyingObject
{
private:
    float angle;
    
public:
    Bullet();
    float getAngle() const {return angle;}
    void setAngle(const float angle) {this->angle = angle;}
    
    //Others
    void draw() const;
    void fire(const Point point, const float angle);

};

#endif /* bullet_hpp */
