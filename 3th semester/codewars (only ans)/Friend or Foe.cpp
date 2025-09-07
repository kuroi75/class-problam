#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) 
{
    std::vector<std::string> a;
  
    for (const std::string& x : input)
    {
      if (x.length() == 4)
      {
        a.push_back(x);
      }
    }
  
    return a;
}