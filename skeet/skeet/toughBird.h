//
//  toughBird.hpp
//  skeet
//
//  Created by Alison Orton on 3/1/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef toughBird_hpp
#define toughBird_hpp

#include "bird.h"

#include <stdio.h>

class ToughBird : public Bird
{
private:
    int life;
    
public:
    ToughBird(const Point &point);
    void draw() const;
    int hit();
};

#endif /* toughBird_hpp */
