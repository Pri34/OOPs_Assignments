#include<iostream>
using namespace std;
class base{
    protected:
    int i;
    public:
    void print(){
        cout<<"This is Base class"<<endl;
    }
};
class derived:public base{
    protected:
    int j;
    public:
    int sum(int x,int y){
        i=x;
        j=y;
        return i+j;
    }
};
int main(){
    derived obj1;
    int sum;
    sum=obj1.sum(10,20);
    cout<<"The sum is "<<sum<<endl;
}