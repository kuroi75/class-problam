#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class book
{
private:
    string title;
    string author;
    int page;
    float price;

public:

book(string t, string a,int p, float pr) : title(t), author(a), page(p),price(pr){}

void displayInfo()
{
    cout << "Title: " << title << "\nAuthor: "<< author << "\nPage: " << page <<"\nPrice: $" << price << fixed <<setprecision(2) <<price << "\n\n";

}
void addDiscount(float discount)
{
    price -= price *(discount/100);
}

};
int main()
{
    //book casees
    book book1("stile like an artis", "dont know",200,10.00);
    book book2("chilon", "dont know",400,10.99);

    // Display
    book1.displayInfo();
    book2.displayInfo();

    cout << "\nAfter applying 10% discount to the first book:\n";
  //  book1,addDiscount(10);
    book1.displayInfo();

    return 0;
}
