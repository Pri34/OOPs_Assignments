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
    rectangle(const rectangle &x){ //const lagana padega to use copy constructor in arrays varna error
    //kyuki const rehna chahiye varna compiler is getting confused
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
    ~rectangle(){
        cout<<"The object is destroyed"<<endl;
    }
};
int main(){
    rectangle r1[4]={rectangle(10,30),rectangle(2,50),rectangle(10,40),rectangle(10,40)};
    rectangle obj1(20,30);
    rectangle r2[2]={obj1,obj1};
    r1[0].printarea();
    r1[1].printarea();
    r1[2].printarea();
    r1[3].printarea();
    r2[0].printarea();
    r2[1].printarea();
    return 0;
}
