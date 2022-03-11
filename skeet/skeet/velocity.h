//
//  velocity.hpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef velocity_hpp
#define velocity_hpp

#include <stdio.h>

class Velocity
{
private:
    float Dx;
    float Dy;
    
public:
    Velocity();
    Velocity(const float Dx, const float Dy);
    
    float getDx() const {return Dx;}
    float getDy() const {return Dy;}
    
    void setDx(const float Dx) {this->Dx = Dx;}
    void setDy(const float Dy) {this->Dy = Dy;}
};

#endif /* velocity_hpp */
