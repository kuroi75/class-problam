#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears)
{
    int catYears = 0;
    int dogYears = 0;
    
    // 1st year
    if (humanYears >= 1) 
    {
        catYears += 15;
        dogYears += 15;
    }
    
    // 2nd year
    if (humanYears >= 2) 
    {
        catYears += 9;
        dogYears += 9;
    }
    
    // 4 and 5 years for 3
    if (humanYears > 2) 
    {
        catYears += (humanYears - 2) * 4;
        dogYears += (humanYears - 2) * 5;
    }
    
    return {humanYears, catYears, dogYears};
}