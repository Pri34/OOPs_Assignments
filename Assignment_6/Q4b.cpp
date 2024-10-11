//a class that contains pure virtual function is abstract class
//body of virtual function is zero....that is pure virtual class
//no objects of abstract class
//redefine pure virtual function in child class
#include<iostream>
using namespace std;
class A{
    public:
    virtual void disp()=0; //used for like if draw function in base class then
    //we define draw rec sq in diff child classes
};
class C:public A{
    public:
    void disp(){
        cout<<"Welcome"<<endl;
    }
};
int main(){
    A *p;
    C obj;
    p=&obj; //made interface that jaise draw mein sab child class
    //can be called using base class so made pointer of base class
    //pointing to child class so that we can call all fucntions
    p->disp();
    return 0;
}
