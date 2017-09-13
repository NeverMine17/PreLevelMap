//
// Created by Student on 13.09.2017.
//

#ifndef LEVELMAP_BLOCKS_H
#define LEVELMAP_BLOCKS_H

const enum angle {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Blocks {
private:
    angle lookingAngle = UP;
protected:
    virtual void draw(angle angle) = 0;

    virtual void rotate(angle angle) = 0;

    virtual bool canPassThrough(angle angle) = 0;
};


#endif //LEVELMAP_BLOCKS_H
