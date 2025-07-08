#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "enter value of n: ";
    cin >> n;

    int v1 = 0, v2 = 1, t = 0;

    cout << "fibonacci " << n << ": ";

    v1 = 0; v2 = 1;
    while (t <= n) 
    {
        cout << t << " ";
        t = v1 + v2;
        v1 = v2;
        v2 = t;
    }
    
    cout << endl;
    return 0;
}
