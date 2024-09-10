#include<iostream>
using namespace std;
class LibraryUser {
    protected:
    string name;
    int ID;
    int phone_number;
};
class student:public LibraryUser{
    protected:
    char grade;
    float cg;
    int year;
    public:
    void takedata(string n,int x,int p,char g,float y,int z){
        name=n;
        ID=x;
        phone_number=p;
        grade=g;
        cg=y;
        year=z;
    }
    void showdata(){
        cout <<"The name is "<<name<<endl<<"The ID is "<<ID<<endl<<"The phone number is "<<phone_number<<endl<<"The grade is "<<grade<<endl<<"The CG is "<<cg<<endl<<"The year is "<<year<<endl;
    }
};
class teacher:public LibraryUser{
    protected:
    string department;
    int room_number;
    public:
    void takedata(string n,int x,int p,string d,int r){
        name=n;
        ID=x;
        phone_number=p;
        department=d;
        room_number=r;
    }
    void showdata(){
        cout <<"The name is "<<name<<endl<<"The ID is "<<ID<<endl<<"The phone number is "<<phone_number<<endl<<"The department is "<<department<<endl<<"The room number is "<<room_number<<endl;
    }
};
int main(){
    student obj1;
    teacher obj2;
    obj1.takedata("Prisha Aggarwal",1020393,3645372,'A',8.37,2); //char comes in single quotes
    obj1.showdata();
    obj2.takedata("Hello",647383,2299330,"OOPs",647);    
    obj2.showdata();
}