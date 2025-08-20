#include <string>

std::string removeExclamationMarks(std::string str){
      std:: string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '!')
        {
            result += str[i];
        }
    }

    return result;
}
