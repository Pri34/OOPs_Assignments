//student int roll
//static int count
//public assign roll number in constrcutor and increment count
//mixing constructors and static function
//then make any function static
#include<iostream>
using namespace std;
class student {
    int roll;
    static int count;
    public:
    student (int a){
        count++;
        roll=a;
    }
    static void display(){
        cout << "total students are "<< count<<endl;
    } //aab this function can be called without using object as well
};
int student::count; //count value becomes zero
int main(){
    student a(10);
    student b(20);
    student c(30);
    student d(20);
    student e(40);
    //e.display() ans same chahe a,b,c,d se call karo
    student :: display();
    return 0;
}