#include<iostream>
using namespace std;
namespace ns1{
    int a=10;
    int j=20;
    void add(){
        int m;
        m=a+j;
        cout << "The sum in namespace 1 is" <<m<<endl;
    }
}
namespace ns2 {
    int a=20;
    int j=30;
    void add(){
        int m;
        m=a+j;
        cout << "The sum in namespace 2 is" <<m<<endl;
    }
}
int main(){
    cout<<"The value of a in namespace 1 is "<<ns1::a<<endl;
    cout<<"The value of a in namespace 2 is "<<ns2::a<<endl;
    cout<<"The value of j in namespace 1 is "<<ns1::j<<endl;
    cout<<"The value of j in namespace 2 is "<<ns2::j<<endl;
    ns1::add();
    ns2::add();
}