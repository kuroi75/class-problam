#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
   int x = 0;
   for (bool s : arr) 
   {
        if (s)
        {
            x++;
        }
    }
    return x;
}
