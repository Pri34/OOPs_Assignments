#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    cout<<"Enter the value of a and b";
    cin >> a;
    cin >> b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout << "Values changed using bitwise Operator"<<endl<<"a="<<a<<"\t"<<"b="<<b;

}