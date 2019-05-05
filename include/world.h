#pragma once

#include <memory>
using std::shared_ptr;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "defs.h"
#include "worldEntity.h"

/*
Represents the game world and manages the entities that live within said world.
*/
class world
{
public:
    /*
    Creates and returns a world.

    width - Width of the world.
    height - Height of the world.
    name - Name of the world.
    */
    world(int width, int height, string name);

    /* 
    Emplaces an entity at the given position if possible.

    entity - Entity to emplace.
    x - The horizontal component.
    y - The vertical component.
    */
    void emplaceEntity(shared_ptr<worldEntity>& entity, int x, int y);

    /*
    Returns the width of the world.
    */
    uint32_t getWidth() const;

    /*
    Returns the height of the world.
    */
    uint32_t getHeight() const;

    /*
    Returns the name of the world.
    */
    string getName() const;

private:
    uint32_t mWidth;
    uint32_t mHeight;
    string mName;
    vector<vector<shared_ptr<worldEntity>>> mWorld;
    vector<shared_ptr<worldEntity>> mOccupants;
};