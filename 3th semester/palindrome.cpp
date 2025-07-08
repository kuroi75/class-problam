#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //char ch[20],org[20],rev[20];
    int num,org,rev;
    cout << "enter: ";
    cin >> num;
    //strcpy(org, ch);
    org = num;
    while (num !=0)
    {
        int x=num%10;
        rev = rev*10+x;
        num /=10;
    }
   
    int i,j,ln =strlen(ch);

    for(i=ln-1, j=0; i >=0; i--, j++)
    {
        rev[j] =ch[i];
    }
    rev[j] ='\o';
    

    if (org==rev)
    {
        cout << org <<" Is a palindome"<<endl;
    }
    else
    {
        cout << org <<" Is not a palindome"<<endl;
    }
    return 0;
}
