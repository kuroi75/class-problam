#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  int x1, x2;
   if (numbers[0] < numbers[1]) 
    {
        x1 = numbers[0];
        x2 = numbers[1];
    } 
  else 
    {
        x1 = numbers[1];
        x2 = numbers[0];
    }
  for (int i = 2; i < numbers.size(); i++) 
  {
        if (numbers[i] < x1) 
        {
            x2 = x1;        
            x1 = numbers[i];   
        } 
        else if (numbers[i] < x2) 
        {
            x2 = numbers[i];   
        }
    }
  return (long)x1+x2;
}