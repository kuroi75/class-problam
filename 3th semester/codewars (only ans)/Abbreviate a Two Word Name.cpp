#include <string>

std::string abbrevName(std::string name)
{
    size_t space = name.find(' ');

    char firstword =std::toupper(name[0]);
    char secondword =std::toupper(name[space + 1]);
    return std::string(1, firstword)+"." +std::string(1,secondword);
}