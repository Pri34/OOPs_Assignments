#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"This is base class"<<endl;
    }
};
class derived:public base{
    public:
    void printderived(){
        cout<<"This is derived class";
    }
};
int main(){
    derived obj1;
    obj1.print();
    obj1.printderived();
}