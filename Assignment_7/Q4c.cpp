#include<iostream>
using namespace std;

class Distance{
    int x,y;
    public:
    Distance(int r=0,int i=0):x(r),y(i){} //can introduce parametrised constrcutor normally, this is another way to introduce it 

    bool operator == (Distance &obj){ //operator + is function call of return type Distance and osmein we have passed parameter
    if(x==obj.x)
    return true;
    else 
    return false;
    }

};

int main(){
    Distance c1(3,4),c2(1,2);
    if(c1==c2)
    cout<<"true";
    else
    cout <<"false"; //c1 is current obj and it can be directly accessed upar
    //+ operator se function call ho rhi jiske parmeter mein c2 pass ho rha hai
    return 0;
}