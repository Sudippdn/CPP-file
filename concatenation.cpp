//1.Write a program overloading  + operator that is used for adding two user defined objects
// as well concatenating two strings depending upon the arguments. Define suitable class 
//data member and methods for it. 
#include <iostream>
using namespace std;
class concatenation
{
	string FirstName;
	string LastName;
	string add;
	public:
		void getdata()
		{
			cout<<"Enter first name: ";
			cin>>FirstName;
			cout<<"Enter last name: ";
			cin>>LastName;
			
		}
		concatenation operator +()
		{
			add = FirstName + LastName;
			show();
		}
		void show()
		{
			cout<<"Full Name = "<<add;
		}
};
int main()
{
	concatenation c;
	c.getdata();
	c.operator +();
	return 0;
}
