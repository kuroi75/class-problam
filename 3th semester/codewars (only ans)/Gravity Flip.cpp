#include <vector>

std::vector<int> flip(const char dir, const std::vector<int>& arr) 
{
    std::vector<int> x = arr;
    
    for (int i = 0; i < x.size(); i++) 
    {
        for (int j = i + 1; j < x.size(); j++) 
        {
            if (dir == 'R' && x[i] > x[j]) 
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
            else if (dir == 'L' && x[i] < x[j]) 
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    return x;

}