#include<iostream>
using namespace std;

void print(int t){
    cout<<"Here is "<<t<<endl;
}

void print(double t){
    cout<<"Here is float "<<t<<endl;
}

void print(int t,int l){
    cout<<"Here are two int "<<t<<" "<<l<<endl;
}

int main(){
    print(20);
    print(20.3);
    print(20,30);
}

//compile time polymorphism