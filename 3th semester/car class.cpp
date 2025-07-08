#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;

class car
{
private:
    string brand;
    string model;
    int year;
    float price;

public:
    car(string b, string m, int y, float p)
    {
        brand = b;
        model = m;
        year = y;
        price = p;
    }


    void display()
    {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nYear: " << year;
        cout << "\nPrice: $" << price << endl;
    }

    void applydis(float rat)
    {
        price -= (price * rat / 100);
    }

    bool antique(int newer)
    {
        return (newer - year) > 25;
    }
};

int main()
{
    // demo car
    car c1("Toyota", "supra mk4", 1995, 8000);
    car c2("Mitsubishi", "lancer", 2000, 4500);
    car c3("Toyota", "supra mk5", 2019, 15000);

    c1.display();
    c2.display();
    c3.display();

    //enter discound
    string applydis;
    cout << "\nDo you want to apply discount? (yes/no): ";
    cin >> applydis;

    if (applydis == "yes")
    {
        float rate;
        cout << "Enter discount rate (0-50%): ";
        cin >> rate;

        cout << "\nApplying " << rate << "% discount to all cars..." <<endl;

        c1.applydis(rate);
        c2.applydis(rate);
        c3.applydis(rate);
    }


    c1.display();
    c2.display();
    c3.display();

    int newer = 2025;
    cout << "\nChecking antique status:\n";
    cout << "Car 1 is antique? " << (c1.antique(newer) ? "Yes" : "No") << endl;
    cout << "Car 2 is antique? " << (c2.antique(newer) ? "Yes" : "No") << endl;
    cout << "Car 3 is antique? " << (c3.antique(newer) ? "Yes" : "No") << endl;


    string addcar;
    cout << "do you wanna add new car?; (yes/no)" <<endl;
    cin >> addcar;

    if (addcar== "yes")
    {
        string brand, mode4;
        int year;
        float price;

        cout << "\nNew car name: ";
        cin >> brand;
        cout << "Mode4: ";
        cin >> mode4;
        cout << "Year: ";
        cin >> year;
        cout << "Price: ";
        cin >> price;

        car c4(brand, mode4, year, price);

        c1.display();
        c2.display();
        c3.display();
        c4.display();

        cout << "\nApplying 10% depreciation to all cars...\n";
        c1.applydis(10);
        c2.applydis(10);
        c3.applydis(10);
        c4.applydis(10);

        c1.display();
        c2.display();
        c3.display();
        c4.display();

        int newer = 2025;
        cout << "\nChecking antique status:\n";
        cout << "Car 1 is antique? " << (c1.antique(newer) ? "yes" : "no") << endl;
        cout << "Car 2 is antique? " << (c2.antique(newer) ? "yes" : "no") << endl;
        cout << "Car 3 is antique? " << (c3.antique(newer) ? "yes" : "no") << endl;
        cout << "Car 4 is antique? " << (c4.antique(newer) ? "yes" : "no") << endl;

    }

    getch();
}

