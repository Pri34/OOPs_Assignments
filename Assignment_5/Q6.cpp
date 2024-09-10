#include <iostream>
using namespace std;
class base
{
public:
    string title;
    string author;
    float price;
};
class derived : public base
{
    string subject;
    public:
    void data(string t, string a, float x, string s)
    {
        title = t;
        author = a;
        price = x;
        subject = s;
    }
    void showdata()
    {
        cout << "The title is " << title << endl
             << "The author is " << author << endl
             << "The price is " << price << endl
             << "The subject is " << subject << endl;
    }
};
int main()
{
    derived obj1;
    obj1.data("The Universe","Prisha Aggarwal",678.4,"Physics");
    obj1.showdata();
}