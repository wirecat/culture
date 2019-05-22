#pragma once

#include <memory>
using std::shared_ptr;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "pawn.h"
#include "cell.h"
#include "defs.h"

/*
 Represents the game world and manages the entities that live within said world.
*/
class world
{
public:
   /*
    Creates and returns a world.
   
    width - Width "of the" world.
    height - Height of the world.
    name - Name of the world.
   */
   world(int width, int height, string name);

   /* 
    Spawns a pawn at the given position if possible.

    pawn - Pawn to spawn.
    x - Proposed position of pawn on x axis.
    y - Proposed position of pawn on y axis.
   */
   bool resolveSpawn(const shared_ptr<pawn>& pawn, uint32_t x, uint32_t y);

   /*
    Returns the width of the world.
   */
   uint32_t getWidth() const;

   /*
    Returns the height of the world.
   */
   uint32_t getHeight() const;

   /*
    Returns the name of the world.
   */
   string getName() const;

   /*
    Returns cell at location if possible
   */
   shared_ptr<cell>& getCell(uint32_t x, uint32_t y);

private:
   uint32_t width_;
   uint32_t height_;
   string name_;
   vector<vector<shared_ptr<cell>>> world_;
};
