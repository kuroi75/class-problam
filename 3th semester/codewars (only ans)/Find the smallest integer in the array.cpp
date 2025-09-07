#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
   int x = list[1];
   for (int i=1; i<list.size(); i++)
   {
    if (list[i] < x)
      x = list[i];
   }
  return x ;
}