#pragma once

#include <memory>
using std::shared_ptr;

#include <map>
using std::map;

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

   /*
   Returns the occupants of the cell.
   */
   virtual const map<uint32_t, shared_ptr<pawn>>&
   getOccupants();

   /*
   If possible, lets the newby join the cell. Returns
   false if not possible.
   
   newby - The pawn attempting to join this cell.
   */
   virtual bool
   resolveJoin(shared_ptr<pawn> newby);

   /*
   Removes the pawn from the cell.
   
   newby - The pawn leaving this cell.
   */
   virtual void
   leave(shared_ptr<pawn> quiter);

private:
   map<uint32_t, shared_ptr<pawn>> occupants_;
};
