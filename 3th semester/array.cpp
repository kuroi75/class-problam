#include <iostream>
#include<conio.h> //for getch
using namespace std;

int main()
{
    int arr[10];
    cout << "enter 10 number:";

   for (int i = 0; i < 10; i++) //input loop
    {
        cin >> arr[i];
    }

    cout << "orginal: ";
    for(int i=0; i<10; i++)
    {
        cout << arr[i]<< " ";
    }

    for (int i=0; i<10;i++) //add 5 loop
    {
        arr[i] +=5;
    }

    cout << "\nafter: ";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    getch();
}
