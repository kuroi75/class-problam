#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int p=0, n=0;
    for(int i:input)
    {
        if (i>0)
        {
            p++;
        }
        else if(i<0)
        {
            n+=i;
        }
    }
    if (input.empty()) 
    {
      return {};
    }
   return {p, n};
}