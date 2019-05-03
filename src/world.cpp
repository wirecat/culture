#include "world.h"

world::world(int width, int height, string name)
    : mWidth(width),
      mHeight(height),
      mName(name)
{ }

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