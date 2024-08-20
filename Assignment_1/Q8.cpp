#include<iostream>
using namespace std ;
int main() {
    int a;
    cout << "Enter the number of days";
    cin >> a;
    if(a<=5){
        cout<<"Your fine is 50 paise";
    }
    else if(a<=10 && a>5){
        cout<<"Your fine is 1rupee";
    } 
    else if(a>10 && a<=30){
        cout << "Your fine is 5 rupees";
    } 
    else{
        cout<<"Your membership is cancelled";
    }
}