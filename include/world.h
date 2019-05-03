#pragma once

#include "defs.h"

#include <memory>
using std::shared_ptr;

#include <string>
using std::string;

class world
{
public:
    world(int width, int height, string name);

    uint32_t getWidth() const;
    uint32_t getHeight() const;

    string getName() const;

private:
    uint32_t mWidth;
    uint32_t mHeight;
    string mName;
};