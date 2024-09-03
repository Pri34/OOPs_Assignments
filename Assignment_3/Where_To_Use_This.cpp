//giving garbage values when same variable names in arguments
//local variable will get preference and osmein data chala jayega and class mein nhi jayega toh end mein garbage 
//values printed
//Yaha par 'this' Operator is used to resolve this problem so that the values go to desired location
#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
	void getdata(int a, int b)
	{
		this->a=a;
		this->b=b;
	
	}
	void showdata()
	{
		cout<<a<<"\t"<<b<<endl;
	}
};
int main()
{
	test t1,t2;
t1.getdata(10,20);
t2.getdata(30,40);
t1.showdata();
}