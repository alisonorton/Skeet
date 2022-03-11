//
//  velocity.cpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#include <iostream>
#include "velocity.h"

using namespace std;

Velocity::Velocity()
{
    setDx(0);
    setDy(0);
}

Velocity::Velocity(const float Dx, const float Dy)
{
    setDx(Dx);
    setDx(Dy);
}

