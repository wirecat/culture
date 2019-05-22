#include "world.h"

world::world(int width, int height, string name)
   : width_(width),
     height_(height),
     name_(name),
     world_(width, vector<shared_ptr<cell>>(height))
{
   for(int i = 0; i < width; i++)
   for(int j = 0; j < height; j++)
   {
      world_[i][j] = std::make_shared<cell>();
   }
}

bool world::resolveSpawn(const shared_ptr<pawn>& pawn, uint32_t x, uint32_t y)
{
   // Must spawn within the boundaries
   if(x >= width_ && y >= height_)
      return false;

   // Spawn if cell allows it
   return world_[x][y]->resolveJoin(pawn);
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

shared_ptr<cell>& world::getCell(uint32_t x, uint32_t y)
{
   return world_[x][y];
}
