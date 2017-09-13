//
// Created by Student on 13.09.2017.
//

#ifndef LEVELMAP_TANK_H
#define LEVELMAP_TANK_H

#include "Blocks.h"

class Thing {
protected:
    virtual void go(angle angle) = 0;

    virtual void rotate() = 0;

private:
    angle lookingAt = DOWN;
};


#endif //LEVELMAP_TANK_H
