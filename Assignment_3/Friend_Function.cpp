// #include<iostream>
// using namespace std;
// class sample {
//     int a,b;
//     public :
//     void setvalue(){
//         a=25;
//         b=40;
//     }
//     friend float mean(sample S);
// };
// float mean(sample S){
//     return (S.a+S.b)/2.0;
// }
// int main(){
//     sample x;
//     x.setvalue();
//     cout << mean(x);
//     return 0;
// }

#include<iostream>
using namespace std;
class test {
    int a;
    int b;
    public :
    void input(int x,int y){
        a=x;
        b=y;

    }
    void showvalue(){
        cout << a<<'\t'<<b<<endl;
    }
    friend void sum(test h);
};
void sum(test h){
    cout<<(h.a+h.b)<<endl;
}
int main(){
    test t1,t2,t3;
    t1.input(10,20);
    t2.input(20,30);
    t3.input(50,60);
    // sum(); //teeno object ka call hoga if we write like this and we wont know konsa a and b add karna hai toh pass objects as arguments always
    //sum(t2) kardo to see konsa call hoga  //One function can be friend of multiple classes
    sum(t2); //isko generally normal function calling ki tarah karenge
}