#include<iostream>
using namespace std;
inline int cube(int i){
    return i*i*i;
}
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The cube is " << cube(a)<<endl;
    return 0;
}