#pragma once

#include <string>
using std::string;

#include "worldEntity.h"

class pawn : public worldEntity
{
public:
    pawn(string name, uint32_t x, uint32_t y, world& entitiesWorld);

    const string& getName() const;

private:
    string mName;
};