#include <iostream>
#include <string>
std::string reverse_words(std::string str)
{
    int x = str.size();
    int z = 0;

    for (int i = 0; i <= x; i++) 
    {
        if (i == x || str[i] == ' ') 
        {
            int L = z, R = i - 1;

            while (L < R) 
            {
                char temp = str[L];
                str[L] = str[R];
                str[R] = temp;
                L++;
                R--;
            }
              z = i + 1; 
            }
         }

    return str;
}