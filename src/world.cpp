#include "world.h"

world::world(int width, int height, string name)
   : width_(width),
     height_(height),
     name_(name),
     world_(width, vector<shared_ptr<pawn>>(height))
{ }

bool world::resolveSpawn(const shared_ptr<pawn>& pawn, uint32_t x, uint32_t y)
{
   // Must spawn within the boundaries
   if(x >= width_ && y >= height_)
      return false;

   // Can't spawn ontop of another pawn
   if(world_[x][y])
      return false;

   // Spawn
   world_[x][y] = pawn;
   return true;
}

uint32_t world::getWidth() const
{
   return width_;
}

uint32_t world::getHeight() const
{
   return height_;
}

string world::getName() const
{
   return name_;
}
shared_ptr<pawn>& world::getPawn(uint32_t x, uint32_t y)
{
   return world_[x][y];
}
