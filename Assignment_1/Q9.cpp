#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    int d;
    cout <<"Enter the numbers";
    cin >> b;
    cin >> c;
    cout << "Enter 1 Add ,2 Subtract,3 Multiply and 4 Divide";
    cin >> a;
    switch (a){
        case 1 : d=(b+c);
        break;
        case 2:d=(b-c);
        break;
        case 3:d=( c*b);
        break;
        case 4: d=(b/c);
        break;
        default : cout << "Enter correct value";
    }
    cout<<"The ans is"<<d;
}