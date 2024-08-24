#include <iostream>
using namespace std;
class Complex {
    float real;
    float img;
    public :
    void setComplex(float a,float b){
        real=a;
        img=b;
    }
    void displayComplex() {
        cout << "The real part is "<< real << '\t'<<"The img part is "<<img<<endl;
    }
    Complex sum(Complex a) {
        Complex z;
        z.real= a.real+real ;
        z.img = a.img+img ;
        return z;
    }
};
int main() {
    Complex x1,x2,x3;
    x1.setComplex(10,20);
    x1.displayComplex();
    x2.setComplex(20,30);
    x2.displayComplex();
    x3=x2.sum(x1);
    x3.displayComplex();
    return 0;
}