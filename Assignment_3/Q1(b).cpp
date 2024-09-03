//jonsa object is calling the function oska address will be stored
//in the 'this' of getdata()
//Agar t2 pass karke then oska address aata

#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
	void getdata(int x, int y)
	{
		a=x;
		b=y;
	}
	void showdata()
	{
		cout<<a<<"\t"<<b<<endl;
	}

};
int main()
{
	test t1,t2;
	test *j;
	j=&t1;
//	t1.getdata(10,20);
	j->getdata(10,20);
//	t1.showdata();
j->showdata();
	t2.getdata(30,40);
	t2.showdata();
}