#include "pawn.h"

uint32_t pawn::nonce_id_ = 0;

pawn::pawn(string name)
   : name_(name),
     id_(nonce_id_++)
{ }

string pawn::getName()
{
   return name_;
}

uint32_t pawn::getId()
{
   return id_;
}
