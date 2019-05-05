#include <iostream>
using std::cout;
using std::endl;

#include "pawn.h"
#include "world.h"

int main()
{
    world test_world(9, 9, "test_world");
    pawn test_pawn("A");
    cout << "Pawn: "
         << test_pawn.getName()
         << endl;
    cout << "World: " 
         << test_world.getWidth() 
         << ','
         << test_world.getHeight()
         << ','
         << test_world.getName()
         << endl;
    return 0;
}