#pragma once

#include <string>
using std::string;

#include "defs.h"

/*
World entities exist within a world and all have a name.
*/
class worldEntity
{
public:
    /*
    Creates and returns a worldEntity.

    name - Name of the worldEntity.
    */
    worldEntity(string name);

    /*
    Returns the name of the worldEntity.
    */
    const string& getName() const;

private:
    string mName;
};