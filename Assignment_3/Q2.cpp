#include<iostream>
using namespace std;
class swap2;
class swap1{
    int x=20;
    int y=30;
    public :
    friend int change1(swap1 s,swap2 h);
};
class swap2 {
    int c=40;
    int d=50;
    public : 
    friend int change1(swap1 s,swap2 h);
};
int change1(swap1 s,swap2 h){
    int e,f;
    e=s.x;
    s.x=h.c;
    h.c=e;
    f=s.y;
    s.y=h.d;
    h.d=f;
    cout << "The private members of Class 1 are "<< s.x <<endl << s.y <<endl<< "The private members of Class 3 are "<< h.c <<endl << h.d << endl;
}
int main(){
    swap1 obj1;
    swap2 obj2;
    change1(obj1,obj2);
}