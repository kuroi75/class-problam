#include <string>
#include <algorithm>

std::string sum_str(const std::string& a, const std::string& b) 
{
  if (a.empty() && b.empty()) 
    return "0";
  
  if (a.empty()) 
    return b;
  
  if (b.empty()) 
    return a;
  
  int num1 = 0;
    for (char c : a)
      {
        num1 = num1 * 10 + (c - '0');
      }
  
  int num2 = 0;
    for (char c : b) 
    {
        num2 = num2 * 10 + (c - '0');
    }
  int sum = num1 + num2;
  
  if (sum == 0) return "0";
    
    std::string x;
    while (sum > 0) 
    {
        x += (sum % 10) + '0';
        sum /= 10;
     }
  
   std::reverse(x.begin(), x.end());
   return x;
}