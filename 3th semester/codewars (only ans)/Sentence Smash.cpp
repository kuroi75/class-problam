#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words)
{
    if (words.empty()) 
      return "";
    
    std::string result = words[0];
  
    for (int i = 1; i < words.size(); i++) 
    {
        result += " " + words[i];
    }
    return result;
}