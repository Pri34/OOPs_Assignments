#include<iostream>
using namespace std;
class rectangle {
    float length;
    float breadth;
    public :
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(float i,float j){
        length=i;
        breadth=j;
    }
    rectangle(rectangle &x){
        length=x.length;
        breadth=x.breadth;
    }
    rectangle(float i){
        length=i;
        breadth=i;
    }
    void printarea(){
        cout << "The ans is " << length*breadth<< endl;
    }
};
int main(){
    rectangle r1;
    rectangle r2(20,30);
    rectangle r3 (r2);
    rectangle r4(10);
    r1.printarea();
    r2.printarea();
    r3.printarea();
    r4.printarea();
    return 0;
}