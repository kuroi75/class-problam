#include <vector>
#include <cstddef>

std::ptrdiff_t least_larger(const std::vector<int>& a, std::size_t i)
{
     if (i >= a.size())
    {
        return -1;
    }

    int temp = a[i];
    std::ptrdiff_t result = -1;

    for (std::size_t j = 0; j < a.size(); ++j)
    {
        if (a[j] > temp)
        {
            if (result == -1 || a[j] < a[result])
            {
                result = j;
            }
        }
    }

    return result;
}