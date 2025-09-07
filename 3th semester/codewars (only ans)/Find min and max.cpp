#include <utility>
#include <vector>

std::pair<long, long> get_min_max(const std::vector<long>& seq) 
{
    long min_val = seq[0];
    long max_val = seq[0];
    
    for (size_t i = 1; i < seq.size(); i++) {
        if (seq[i] < min_val) {
            min_val = seq[i];
        }
        if (seq[i] > max_val) {
            max_val = seq[i];
        }
    }
    
    return {min_val, max_val};
}