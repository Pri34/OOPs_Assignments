#include<iostream>
using namespace std;
class object{
    int a;
    public:
    void setvalue(int x){
        a=x;
    }
    object passbyvalue(object s){
        object z;
        z.a=a+s.a;
        return z;
    }
    void showdata(){
        cout<<"The sum is " << a;
    }
};
int main(){
    object t1,t2,t3;
    t1.setvalue(10);
    t2.setvalue(10);
    t3=t2.passbyvalue(t1);
    t3.showdata();
    return 0;
}