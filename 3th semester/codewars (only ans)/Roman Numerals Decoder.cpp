#include <string>
#include <vector>
using namespace std;

int solution(const std::string& s) {
    std::vector<std::pair<std::string, int>> roman = {
        {"M", 1000},
        {"CM", 900},
        {"D", 500},
        {"CD", 400},
        {"C", 100},
        {"XC", 90},
        {"L", 50},
        {"XL", 40},
        {"X", 10},
        {"IX", 9},
        {"V", 5},
        {"IV", 4},
        {"I", 1}
    };

    int result = 0;
    size_t i = 0;

    while (i < s.length()) {
        bool matched = false;

        for (const auto& p : roman) {
            const std::string& symbol = p.first;
            int value = p.second;

            if (s.substr(i, symbol.length()) == symbol) {
                result += value;
                i += symbol.length();
                matched = true;
                break;
            }
        }

        if (!matched) {
            std::cerr << "Invalid." << std::endl;
            return -1;
        }
    }

    return result;
}