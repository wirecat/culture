#include <iostream>
using std::cout;
using std::endl;

#include "pawn.h"
#include "world.h"

int main()
{
   world test_world(9, 9, "test_world");
   test_world.resolveSpawn(shared_ptr<pawn>(new pawn("A")), 0, 0);
   test_world.resolveSpawn(shared_ptr<pawn>(new pawn("B")), 1, 0);
     
   cout << "World: " 
        << test_world.getWidth() 
        << ','
        << test_world.getHeight()
        << ','
        << test_world.getName()
        << endl;

   cout << "Pawns:" << endl;
   for(int i = 0; i < test_world.getWidth(); i++)
     for(int j = 0; j < test_world.getHeight(); j++)
     {
          auto found_pawn = test_world.getPawn(i, j);
          if(found_pawn)
          {
               cout << i
                    << ','
                    << j
                    << ": "
                    << found_pawn->getName()
                    << endl;
          }
     }
   return 0;
}
