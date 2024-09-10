#include<iostream>
using namespace std;
class vehicle{
    protected:
    int model;
    int year;
    string make;  
};
class truck:public vehicle{
    protected:
    int load_capacity;
};
class special_truck:public truck{
    protected:
    int temp_control;
    public:
    void enterdata(string m,int x,int y,int l,int t){
        make=m;
        model=x;
        year=y;
        load_capacity=l;
        temp_control=t;
    }
    void display(){
        cout<<"The company of truck is "<<make<<endl<<"The model is "<<model<<endl<<"The year is "<<year<<endl<<"The load capacity is "<<load_capacity<<endl<<"The temp control is "<<temp_control<<endl;
    }
};
int main(){
    special_truck obj1;
    obj1.enterdata("Tata",234,2023,45,56);
    obj1.display();
}