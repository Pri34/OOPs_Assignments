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
	friend class sample;
};
class sample
{
public:
	void showdata(test h)
	{
		cout<<h.a<<"\t"<<h.b<<endl;
	}	
};
int main()
{
	test t1,t2;
	t1.getdata(10,20);
	t2.getdata(30,40);
	sample s1,s2;
	s1.showdata(t2);
}