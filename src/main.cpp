#include <iostream>
using std::cout;
using std::endl;

#include "pawn.h"
#include "world.h"
#include "cell.h"

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

   cout << "Cells & Occupants:" << endl;
   for(int i = 0; i < test_world.getWidth(); i++)
      for(int j = 0; j < test_world.getHeight(); j++)
      {
         auto found_cell = test_world.getCell(i, j);
         auto occupants = found_cell->getOccupants();

         if(occupants.size() > 0)
         {
            cout << "  "
                 << i
                 << ','
                 << j
                 << ":"
                 << endl;

            for(auto occupant : occupants)
            {
               cout << "    "
                    << occupant.first
                    << ", "
                    << occupant.second->getName()
                    << endl;
            }
         }
      }
   return 0;
}
