//WAP to display your name address and age.
#include <iostream>
using namespace std;
class detail
{
	string name, address;
	int age;
	public:
		void getdata()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your address: ";
			cin>>address;
			cout<<"Enter your age: ";
			cin>>age;
		}
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Age: "<<age;
		}
};
int main()
{
	detail n;
	n.getdata();
	n.show();
}
