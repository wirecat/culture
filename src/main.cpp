#include <iostream>
using std::cout;
using std::endl;

#include "pawn.h"
#include "world.h"

int main()
{
    world test_world(9, 9, "test_world");
    pawn test_pawn("A", 4, 4, test_world);
    cout << "Pawn: "
         << test_pawn.getName()
         << ','
         << test_pawn.getX()
         << ','
         << test_pawn.getY()
         << ','
         << test_pawn.getEntitiesWorld().getName()
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