#include <iostream>
using std::cout;
using std::endl;

#include "pawn.h"

int main()
{
   pawn test_pawn("A");
   cout << test_pawn.getName() << endl;
   return 0;
}