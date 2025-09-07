#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) 
{
    for (const auto &item : seq)
    {
       if (item == elem) 
           return true;
    }
    return false;
}