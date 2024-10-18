#include<iostream>
using namespace std;

class Distance{
    int x,y;
    public:
    Distance(int r=0,int i=0):x(r),y(i){} //can introduce parametrised constrcutor normally, this is another way to introduce it 

    Distance operator + (Distance &obj){ //operator + is function call of return type Distance and osmein we have passed parameter
        Distance c;
        //this is operator overloading
        c.x=this->x+obj.x;
        c.y=this->y+obj.y;
        return c;
    }

    void display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Distance c1(3,4),c2(1,2);
    Distance c3=c1+c2; //c1 is current obj and it can be directly accessed upar
    //+ operator se function call ho rhi jiske parmeter mein c2 pass ho rha hai
    c3.display();
    return 0;
}