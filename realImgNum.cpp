  /*Write  a program defining a class named complex with two data member real and imaginary .
  Use necessary member functions for input/ output and define a member function that adds the two 
  complex objects and return object. Also display the result using a member function display().*/
#include <iostream>
using namespace std;
class realImg
{
	int real, img;
	public:
		void getdata()
		{
			cout<<"Enter real number: ";
			cin>>real;
			cout<<"Enter img number: ";
			cin>>img;
		}
		void showdata()
		{
			cout<<"value is "<<real<<" + "<<img<<" i\n"<<endl;
			
		}
		friend realImg operator +(realImg r,realImg i);

};
realImg operator +(realImg r,realImg i)
{
	realImg u;
	u.real = r.real + i.real;
	u.img= r.img+ i.img;
	return u;
}
int main()
{
	realImg r1,r2,r3;
	r1.getdata();
	r1.showdata();
	r2.getdata();
	r2.showdata();
	r3= r1+r2;
	r3.showdata();
	return 0;
}
