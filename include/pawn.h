#pragma once

#include <string>
using std::string;

#include "worldEntity.h"

/*
Pawns are animated entities that live within a world. They have artificial
intelligence, attributes, and can attempt to act upon other pawns within
the world.
*/
class pawn : public worldEntity
{
public:
    /*
    Creates and returns a pawn.
    */
    pawn(string name);

private:
};