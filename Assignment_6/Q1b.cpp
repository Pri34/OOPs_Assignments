#include<iostream>
using namespace std;
//pointer used to call functions of base and child
//method overriding i.e child wala show overided by base class
//run time polymorphism
class base{
    public:
    virtual void show()
    {
        cout<<"base\n"<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"derived\n"<<endl;
    }
};
int main(){
    base b1;
    b1.show();      //base
    derived d1;
    d1.show();      //derived
    base *pb=&b1; 
    pb->show();     //base
    pb=&d1;
    pb->show();     //derived
}
