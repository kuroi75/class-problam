#include <vector>

std::vector<int> invert(std::vector<int> values)
{ 
    for (int &x : values)
      {
      x = -x;
    }
    return values;
}