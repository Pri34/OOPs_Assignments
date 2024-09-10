//constuctor and destructor always come in public class
//parent constuctor always called first
//destructor in reverse order than destructor
//constructor are inherited
//which constructor called first in order of inheritance 
#include<iostream>
using namespace std;
class base {
    public:
    base(){
        cout << "This is base constructor"<<endl;
    }
    ~base(){
        cout<<"constructor is destroyed"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"This is derived class constructor"<<endl;
    }
    ~derived(){
        cout<<"constructor of derived class is destroyed"<<endl;
    }
};
int main(){
    derived obj1; //constructor is called by default
    return 0;
}