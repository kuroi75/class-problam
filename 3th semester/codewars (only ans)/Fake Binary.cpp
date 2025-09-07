#include <string>

#define 😉 '5'
#define 🥲 '0'
#define 🫰 '1'
#define 🤔 if
#define 🥹 else
#define 😎 str
#define 👋 return
#define 🤝 =
#define 🫤 <

std::string fakeBin(std::string str)
{
   for (char &x : str) 
    {
        🤔 (x 🫤 😉) 
            x 🤝 🥲;
        🥹
            x 🤝 🫰; 
    }
    👋 😎;
}