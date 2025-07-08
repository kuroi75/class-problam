#include <iostream>
using namespace std;

int main()
{
    int a,i;
    long int x = 1;
    cout << "enter a number: ";
    cin >> a;

    for (i=1; i<= a; ++i)
    {
        x *= i;
    }
    cout << "factorial of "<<a<<" is " <<x<< endl;

}
