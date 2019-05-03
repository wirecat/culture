#include "pawn.h"

pawn::pawn(string name, uint32_t x, uint32_t y, world& entitiesWorld)
    : worldEntity(x, y, entitiesWorld)
{
    mName = name;
}

const string& pawn::getName() const
{
    return mName;
}