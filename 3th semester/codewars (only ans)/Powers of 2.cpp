#include <vector>
#include <cstdint>

std::vector<uint64_t> powers_of_two(int n)
{
    std::vector<uint64_t> x;
    
    for (int i = 0; i <= n; ++i) 
    {
        x.push_back(1ULL << i);
    }
    return x;
}