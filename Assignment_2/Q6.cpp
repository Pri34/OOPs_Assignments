#include<iostream>
using namespace std;
int a=20;
class scope {
    static int count;
    int a=19;
    int j=12;
    public:
        void sum();
};
void scope::sum(){
    int i;
    i=a+j;
    int m;
    m=::a+j;
    cout << "The sum is (if i is local variable)"<<i<<endl;
    cout << "The sum is (if i is global variable)"<<m<<endl;
    count++;
    cout<<count<<endl;
}
int scope::count=0;

int main(){
    scope x1;
    x1.sum();
    char a;
    cout << "Enter a alphabet";
    std::cin >> a;
    cout << "The entered Alphabet is "<<a;
}