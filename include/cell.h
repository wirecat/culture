#pragma once

#include <memory>
using std::shared_ptr;

#include <vector>
using std::vector;

#include "pawn.h"

#include "defs.h"

/*
 Represents a single cell of the world.
*/
class cell
{
public:
   /*
   Creates and returns a cell
   */
   cell();

private:
   vector<pawn> occupants_;
};
