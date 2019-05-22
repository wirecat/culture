#include "cell.h"

cell::cell()
{ }

const map<uint32_t, shared_ptr<pawn>>&
cell::getOccupants()
{
   return occupants_;
}

bool cell::checkJoin(shared_ptr<pawn> newby)
{
   return true;
}

bool cell::resolveJoin(shared_ptr<pawn> newby)
{
   bool retVal = false;

   if(checkJoin(newby))
   {
      occupants_[newby->getId()] = newby;
      retVal = true;
   }
   
   // Base cell always allows joins.
   return retVal;
}

void cell::leave(shared_ptr<pawn> quiter)
{
   occupants_.erase(quiter->getId());
}
