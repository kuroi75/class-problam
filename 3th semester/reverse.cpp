#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cout << "enther number: ";
    cin >> num;

    while (num != 0)
    {
        int a = num % 10;
        rev = rev * 10 + a;
        num /=10;
    }
    cout << "reversed number: " << rev <<endl;

    return 0;
}
