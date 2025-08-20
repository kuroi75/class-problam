#include <vector>

std::vector<int> reverseSeq(int n)
{  
    std::vector<int> x;
    for (int i = n; i >= 1; --i)
    {
        x.push_back(i);
    }
    return x;
}