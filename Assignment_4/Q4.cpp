#include<iostream>
#include<string.h>
using namespace std;
class test{
    char *name;
    int *ptr;
    public :
    test();
    test(int e);
    void display();
    test(char *);
    void displayname();
};
test :: test(){
    ptr=new int;
    *ptr=100;
}
test::test(int e){
    ptr=new int;
    *ptr=e;
}
void test::display(){
    cout << "The value of objects is "<< ptr << endl;
}
test :: test(char *e){
    int length=strlen(e);
    name=new char[length+1];
    strcpy(name,e);
}
void test::displayname(){
    cout << name<<endl;
}
int main(){
    test obj;
    test obj1(40);
    test obj2("Prisha Aggarwal");
    obj.display();
    obj1.display();
    obj2.displayname();
    return 0;
}