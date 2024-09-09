#include<iostream>
using namespace std;
class object{
    int a;
    public:
    void putdata(int x){
        a=x;
    }
    object passbyaddress(object *s){
        object t4;
        t4.a= a + (*s).a;
        return t4;
    }
    void showdata(){
        cout<<"The sum is "<<a;
    }
};
int main(){
    object t1,t2,t3;
    t1.putdata(10);
    t2.putdata(20);
    t3=t2.passbyaddress(&t1);
    t3.showdata();
    return 0;
}