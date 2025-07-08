#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;

class student
{
private:
    string name;
    int roll;
    float marks[5];
    float totalmarks;

public:
    student(string n, int r, float m[])
    {
        name = n;
        roll=r;
        totalmarks=0;
        for (int i=0; i<5; i++)
        {
            marks[i]=m[i];
        }
    }
    void allmarks()
    {
        totalmarks = 0;
        for (int i=0; i<5; i++)
        {
            totalmarks +=marks[i];
        }
    }
    float parcentage()
    {
        return totalmarks /5;
    }

    void display()
    {
        cout << "\nName: " << name<< endl;
        cout << "Roll: " <<roll<< endl;
        cout << "Marks: "<< endl;
        for (int i=0; i<5; i++)
        {
            cout << marks[i] <<" ";
        }
        cout << "\nTotal mark: " << totalmarks<< endl;
        cout << "Percentage: " <<fixed << setprecision(2) << parcentage() << endl; //fixed setprecision for last 2 digites
    }
};

int main()
{
    //demo student
    float m1[5] = {80, 40.5, 78.5, 68, 72.5};
    float m2[5] = {70.0, 65.5, 60, 75.0, 72.5};
    float m3[5] = {75, 58.5, 42, 69.5, 80};

    student s1("Fahim", 2439, m1);
    student s2("jabir", 2518, m2);
    student s3("Tirtha", 2501 , m3);

    s1.allmarks();
    s2.allmarks();
    s3.allmarks();

    s1.display();
    s2.display();
    s3.display();

    //new student
    string newstudent;
    cout << "\ndo you wanna add new student? (yes/no): " <<endl;
    cin >> newstudent;

    if (newstudent == "yes")
    {
        string name2;
        int roll2;
        float marks2[5];

        cout << "enter student name: ";
        cin >> name2;
        cout << "enter roll: ";
        cin >> roll2;
        cout << "enter 5 marks (out of 100): ";
        for (int i=0; i<5; i++)
        {
            cin >> marks2[i];
        }
        student s4(name2, roll2,marks2);

        s1.allmarks();
        s2.allmarks();
        s3.allmarks();
        s4.allmarks();

        s1.display();
        s2.display();
        s3.display();
        s4.display();
    }

    getch();
}
