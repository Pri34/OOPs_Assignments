#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter number to check if its Odd or Even";
    cin >> a;
    if(a%2==0){
        cout << "The number is Even";
    } else {
        cout << "The number is Odd";
    }
}