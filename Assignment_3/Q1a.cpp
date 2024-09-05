#include<iostream>
using namespace std;
class cl {
    int i;
    public :
    cl (int j){
        i=j;
    }
    int get_i() {
        return i;
    }
};
int main(){
    cl ob(88);
    cl *p;
    p=&ob;
    cout << p->get_i()<<endl;
    cout << ob.get_i();
    return 0;
} 