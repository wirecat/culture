#pragma once

#include <string>
using std::string;

#include "defs.h"

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

   /*
   Returns the id of the pawn.
   */
   uint32_t getId();

private:
   static uint32_t nonce_id_;

   string name_;
   uint32_t id_;
};
