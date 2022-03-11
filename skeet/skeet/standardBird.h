//
//  standardBird.hpp
//  skeet
//
//  Created by Alison Orton on 3/5/18.
//  Copyright © 2018 Alison Orton. All rights reserved.
//

#ifndef standardBird_hpp
#define standardBird_hpp

#include <stdio.h>
#include "bird.h"
//#include "flyingObject.h"

class StandardBird : public Bird
{
private:
    int life;
    
public:
    StandardBird(const Point &point);
    void draw() const;
    int hit();
};


#endif /* standardBird_hpp */
