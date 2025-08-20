#include <vector>
int sum(const std::vector<int> &nums)
 { 
    int total = 0.0;
    for (int num : nums) {
        total += num;
    }
    return total;
}