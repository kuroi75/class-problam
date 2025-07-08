#include<iostream>
using namespace std;

int main()
{
    int a,b,c,j;
    cout << "Enter 3 number: ";
    cin >> a>>b>>c;

    j=a;
    if (b>c)
        j=b;
    if (c>b)
        j=c;
    cout << "largest number: " <<j;

    return 0;
}
