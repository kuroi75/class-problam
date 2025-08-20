#include <string>
using namespace std; 

string sliceString (string str )
{
      if (str.length() <= 2)
    {
        return "";
    }
    str.erase(str.length() - 1, 1); // remove last cha
    str.erase(0, 1);                // remove first cha
    return str; 
}