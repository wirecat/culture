#include "worldEntity.h"

worldEntity::worldEntity(uint32_t x, uint32_t y, world& entitiesWorld)
    : mX(x),
      mY(y),
      mWorld(entitiesWorld)
{ }

uint32_t worldEntity::getX() const
{
    return mX;
}

void worldEntity::setX(uint32_t x)
{
    mX = x;
    // TODO Consider notifying world of change. Maybe it caches this information?
}

uint32_t worldEntity::getY() const
{
    return mY;
}

void worldEntity::setY(uint32_t y)
{
    mY = y;
    // TODO Consider notifying world of change. Maybe it caches this information?
}

world& worldEntity::getEntitiesWorld() const
{
    return mWorld;
}