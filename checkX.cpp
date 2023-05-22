//WAP to check if the value of x is less than 10.
#include <iostream>
using namespace std;
class integer
{
	int x;
	public:
		void getdata()
		{
			cout<<"Enter the value of x: ";
			cin>>x;
		}
		void show()
		{
			if(x<10)
			{
				cout<<x<<" is les than 10."<<endl;
			}
			else 
			cout<<x<<" is more than 10."<<endl;
		}
};
int main()
{
	integer value;
	value.getdata();
	value.show();
	return 0;
}
