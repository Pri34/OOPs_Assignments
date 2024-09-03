#include<iostream>
using namespace std;
class rectangle {
    float length;
    float breadth;
    public :
    rectangle(float i,float j){
        length=i;
        breadth=j;
    }
    rectangle(float i=10){
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
    r1.printarea();
    r2.printarea();
    return 0;
}