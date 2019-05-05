#include "worldEntity.h"

worldEntity::worldEntity(string name)
    : mName(name)
{ }

const string& worldEntity::getName() const
{
    return mName;
}