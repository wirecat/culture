#include "pawn.h"

#include <iostream>
using std::cout;
using std::endl;

pawn::pawn(string name)
{
    mName = name;
}

const string& pawn::getName()
{
    return mName;
}