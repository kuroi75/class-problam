#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    std::vector<std::string> out;
  
    for (int i = 0; i < lines.size(); i++) 
    {
        out.push_back(std::to_string(i + 1) + ": " + lines[i]);
    }
  
    return out;
}