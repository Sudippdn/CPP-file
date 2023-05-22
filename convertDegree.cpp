//9.	Write a program that converts objects of one class to object in to another class.
// Assume one class is to be Degree and another to be radian.
#include <iostream>
using namespace std;
class A
{
	public:
	float degree, radian;
	string pi;
	public:
		void getdata()
		{
			cout<<"Enter angle in degree : ";
			cin>>degree;
		}
		
};
class B: public A
{
	public:
		void convert()
		{
			radian= (degree/180);
			show();
		}
		void show()
		{
			cout<<"After conversion, radian = "<<radian<<"pi";
		}
};
int main()
{
	B c;
	c.getdata();
	c.convert();
}
