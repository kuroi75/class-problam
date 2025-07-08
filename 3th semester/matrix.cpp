#include <iostream>
using namespace std;

int main()
{
    int m1[3][3], m2[3][3],ans[3][3];
    int i,j;

    cout << "enter 1st matrix: ";
    for (i =0; i <3; i++)
    {
        for (j =0; j<3; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "enter 2nd matrix: ";
    for (i =0; i <3; i++)
    {
        for (j =0; j<3; j++)
        {
            cin >> m2[i][j];
        }
    }

    for(i= 0; i<3; i++)  //add
    {
        for (j = 0; j < 3; j++)
        {
            ans[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "matrix (A + B):\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
