//Same Function can be friend to multiple classes
#include<iostream>
using namespace std;
class sample; //phele se told ki this class exits varna baad mein error aayega in friend in test kyuki sample class declared baad mein but used phele
class test
{
	int a;
	public:
	void getdata(int x)
	{
		a=x;
	}
	friend void sum(test g, sample h);
};
class sample
{
	int b;
	public:
	void setdata(int y)
	{
		b=y;
	}
	friend void sum(test g, sample h);
};
void sum(test g, sample h)
{
	cout<<g.a+h.b<<endl;
}
int main()
{
	test t1,t2;
	sample s1,s2;
	t1.getdata(10);
	t2.getdata(20);
	s1.setdata(30);
	s2.setdata(40);
	sum(t1,s2);
}