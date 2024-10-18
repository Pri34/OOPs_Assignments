#include <iostream>
using namespace std;

//uninary operator exmaple

class Distance{
    int feet,inches;
    public:
    Distance(int f=0,int i=0):feet(f),inches(i){}

    //Overload uninary operator
    Distance operator - (){
        feet=-feet;
        inches=-inches;
        return Distance(inches,feet);
    }

    void display(){
        cout<<feet<<" feet, "<<inches<<" inches"<<endl;
    }
};

int main(){
    Distance d1(10,5);
    Distance d2=-d1;
    d2.display();
    return 0;
}