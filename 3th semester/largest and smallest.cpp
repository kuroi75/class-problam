#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "enter 10 numbers: ";
    for (int i=0; i<10; i++)
    {
        cin >> arr[i];
    }

    int lr = arr[0];
    int sl =arr[1];

    for (int i=1; i < 10; i++)
    {
        if(arr[i] > lr)
        {
            lr =arr[i];
        }
        if (arr[i] <sl)
        {
            sl =arr[i];
        }
    }
    cout << "largest number: " << lr<<endl;
    cout << "smallest number: " << sl<<endl;
    return 0;
}
