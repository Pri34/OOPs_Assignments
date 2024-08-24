#include<iostream>
using namespace std;
class Private {
    int a,b,c;
    void try1(){
        cout<<"Enter single digit number";
    }
    public :
    void calling() {
        try1();
    }
    void enter() {
        cin>>a;
    }
};
int main() {
    Private x1;
    x1.calling() ;
    x1.enter();
}
