#pragma once

#include <string>
using std::string;

class pawn
{
public:
    pawn(string name);

    const string& getName();

private:
    string mName;
};