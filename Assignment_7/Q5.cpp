#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex(int r=0,int i=0):real(r),img(i){} //can introduce parametrised constrcutor normally, this is another way to introduce it 

    Complex operator + (Complex &obj){ //operator + is function call of return type complex and osmein we have passed parameter
        Complex c;
        //this is operator overloading
        c.real=this->real+obj.real;
        c.img=this->img+obj.img;
        return c;
    }

    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
};

int main(){
    Complex c1(3,4),c2(1,2);
    Complex c3=c1+c2; //c1 is current obj and it can be directly accessed upar
    //+ operator se function call ho rhi jiske parmeter mein c2 pass ho rha hai
    c3.display();
    return 0;
}