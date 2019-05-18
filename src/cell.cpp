#include "cell.h"

cell::cell()
{ }

const map<uint32_t, shared_ptr<pawn>>&
cell::getOccupants()
{
   return occupants_;
}

bool cell::resolveJoin(shared_ptr<pawn> newby)
{
   occupants_[newby->getId()] = newby;
   
   // Base cell always allows joins.
   return true;
}

void cell::leave(shared_ptr<pawn> quiter)
{
   occupants_.erase(quiter->getId());
}
