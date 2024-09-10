#include<iostream>
using namespace std;
class base{
    protected: //accsessible inside class and in child class //this is access specifier
    int i;
    public:
    void display(){
        cout<<"This is base class"<<endl;
    }
};
//no matter what private wala data of parents can never go to child
//visibility of objects can only be decreased in child but not increased
class derived:private base{ //here private is mode of inheritance that tells parent wala objects u will get in child in which way
    protected:
    int j;
    public:
    void sum(int x,int y){
        i=x;
        j=y;
        cout <<"The sum is "<< (i+j)<<endl;
    }
    void display1(){
        display();
        cout<<"This is derived class 1"<<endl;
    }
};
class derived1:protected base{
    protected:
    int k;
    public:
    void multiply(int m,int n){
        i=m;
        k=n;
        cout<<"The result is "<<(i*k)<<endl;
    }
    void display2(){
        display();
        cout<<"This is derived class 2"<<endl;
    }
};
int main(){
    derived obj1;
    derived1 obj2;
    obj1.sum(10,20);
    obj1.display1();
    obj2.multiply(10,20);
    obj2.display2();
}