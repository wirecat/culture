#pragma once

#include "defs.h"
#include "world.h"

class worldEntity
{
public:
    worldEntity(uint32_t x, uint32_t y, world& entitiesWorld);

    uint32_t getX() const;
    void setX(uint32_t x);

    uint32_t getY() const;
    void setY(uint32_t y);

    world& getEntitiesWorld() const;

private:
    uint32_t mX;
    uint32_t mY;
    world& mWorld;
};