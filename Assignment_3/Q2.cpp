#include<iostream>
using namespace std;
class swap1{
    int a;
    int b;
    public :
    void setvalue(int x, int y){
        a=x;
        b=y;
    }
 
    friend int change1(swap1 s);
};
int change1(swap1 s){
    int c;
    c=s.a;
    s.a=s.b;
    s.b=c;
    cout<<"The value of a is "<<s.a<<endl;
    cout<<"The value of b is "<< s.b<<endl;
}
int main(){
    swap1 x;
    x.setvalue(10,20);
    change1(x);
}