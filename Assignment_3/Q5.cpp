#include<iostream>
using namespace std;
class rectangle {
    float height;
    float width;
    public:
    void getdata(){
        cout<<"Enter height "<<endl;
        cin >> height;
        cout<<"Enter width "<<endl;
        cin >> width;
    }
    void area(){
        cout<<"The area is "<<(height*width)<<endl;
    }
};
int main(){
    rectangle obj1[4];
    for(int i=0;i<4;i++){
        obj1[i].getdata();
    }
    for(int i=0;i<4;i++){
        obj1[i].area();
        cout<<endl;
    }
}