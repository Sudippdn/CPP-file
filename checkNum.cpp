//WAP to check the greatest number among three inputs taken from the user.
#include <iostream>
using namespace std;
class checkNum
{
	int a, b, c;
	public:
		void getdata()
		{
			cout<<"Enter three numbers: "<<endl;
			cout<<"a = ";
			cin>>a;
			cout<<"b = ";
			cin>>b;
			cout<<"c = ";
			cin>>c;
			
		}
		void show()
		{
			if(a>b)
			{
				if(a>c)
				{
				cout<<"a is the greatest number."<<endl;
			 	}
			 	else
			 	cout<<"c is the greatest number."<<endl;
			}
			else if(b>a)
			{
				if (b>c)
				{
					cout<<"b is the greatest number."<<endl;
				}
				else
				{
					cout<<"c is the greatest number."<<endl;
				}
				
			}
			else
			{
				cout<<"c is the greatest number."<<endl;
			}
			
		}
};
int main()
{
	checkNum num;
	num.getdata();
	num.show();
}
