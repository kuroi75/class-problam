#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int pr=1;
    cout << "enter number: ";
    cin >> n;

    if (n <= 1) // only for the 1 having error :)
        cout << n << " is not prime number";

    for (i=2; i <= n/2; i++)
    {
       if(n % i == 0)
       {
           pr=0;
           break;
       }
    }

    if (pr==1)
        cout << n << " is prime number";
    else
        cout << n << " is not prime number";
    return 0;
}


/*
int n, i;
bool pr = true;
cout << "Enter number: ";
cin >> n;

if (n <= 1)
    pr = false;
else {
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            pr = false;
            break;
        }
    }
}

if (pr)
    cout << n << " is a prime number" << endl;
else
    cout << n << " is not a prime number" << endl;
*/
