#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    string address;
};
class staff_members:public virtual person{
    protected:
    int employee_ID;
    string department;
    public:
    void getdata1(string n,string a,int i,string d){
        name=n;
        address=a;
        employee_ID=i;
        department=d;
    }
    void showdata1(){
        cout<<"The name is "<<name<<endl<<"The address is "<<address<<endl<<"The employee ID is "<<employee_ID<<endl<<"The department is "<<department<<endl;
    }
};
class student:public virtual person{
    protected:
    int student_id;
    char grade;
    public:
    void getdata2(string n,string a,int i,char g){
        name=n;
        address=a;
        student_id=i;
        grade=g;
    }
    void showdata2(){
        cout<<"The name is "<<name<<endl<<"The address is "<<address<<endl<<"The student ID is "<<student_id<<endl<<"The grade is "<<grade<<endl;
    }
};
class teaching_assistants:public student,public staff_members{
    protected:
    string degree;
    public:
    void getdata3(string n,string a,int i,char g,int y,string m,string d){
        name=n;
        address=a;
        student_id=i;
        grade=g;
        employee_ID=y;
        department=m;
        degree=d;
    }
    void showdata3(){
        cout<<"The name is "<<name<<endl<<"The address is "<<address<<endl<<"The student ID is "<<student_id<<endl<<"The grade is "<<grade<<endl<<"The employee id is "<<employee_ID<<endl<<"The department is "<<department<<endl<<"The degree is "<<degree<<endl;
    }
};
int main(){
    student obj1;
    staff_members obj2;
    teaching_assistants obj3;
    obj1.getdata2("Prisha","hello",74773,'A');
    obj1.showdata2();
    obj2.getdata1("Rana","123",4536,"Csed");
    obj2.showdata1();
    obj3.getdata3("me","4333",2322,'A',43444,"OOPs","PHD");
    obj3.showdata3();
    return 0;
}