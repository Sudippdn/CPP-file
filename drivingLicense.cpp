//WAP to check whether you're eligible for the trail of driving license or not (in Nepal)
//WAP to check if the value of x is less than 10.
#include <iostream>
using namespace std;
class integer
{
	int age;
	public:
		void getdata()
		{
			cout<<"Enter your age: ";
			cin>>age;
		}
		void show()
		{
			if(age>18)
			{
				cout<<"You are eligible of driving license in Nepal."<<endl;
			}
			else 
			cout<<"You are not eligible of driving license in Nepal."<<endl;
		}
};
int main()
{
	integer value;
	value.getdata();
	value.show();
	return 0;
}
