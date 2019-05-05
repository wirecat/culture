#include "world.h"

world::world(int width, int height, string name)
    : mWidth(width),
      mHeight(height),
      mName(name),
      mWorld(width, vector<shared_ptr<worldEntity>>(height, nullptr)),
      mOccupants()
{ }

void world::emplaceEntity(shared_ptr<worldEntity>& entity, int x, int y)
{
    // TODO Verify these inputs before adding. Maybe return an enum to indicate
    // failure conditions?

    mOccupants.push_back(entity);
    mWorld[x][y] = entity;
}

uint32_t world::getWidth() const
{
    return mWidth;
}

uint32_t world::getHeight() const
{
    return mHeight;
}

string world::getName() const
{
    return mName;
}