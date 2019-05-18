#pragma once

#include <string>
using std::string;

/*
Pawns are animated entities that live within a world. They have artificial
intelligence, attributes, and can attempt to act upon other pawns within
the world.
*/
class pawn
{
public:
   /*
   Creates and returns a pawn.
   */
   pawn(string name);

   /*
   Returns name of pawn.
   */
   string getName();

private:
   string name_;
};
