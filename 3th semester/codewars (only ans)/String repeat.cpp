#include <string>

std::string repeat_str(size_t repeat, const std::string& str) 
{
   std::string x;
  for (int i=0; i<repeat; i++)
  {
    x += str;
  }
  return x;
}