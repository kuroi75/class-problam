#include <vector>
#include <string>

std::vector<bool> flick_switch(const std::vector<std::string>& arr)
{
    
        std::vector<bool> result;
    bool state = true;
    
    for (const auto& word : arr)
    {
        if (word == "flick") {
            state = !state; 
        }
        result.push_back(state);
    }
    
    return result;
}