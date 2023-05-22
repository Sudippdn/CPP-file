#include <iostream>
using namespace std;
class detail
{
	string name;
	int age;
	public:
		void getdata()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your age: ";
			cin>>age;
		}
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age;
		}
};
int main()
{
	detail n;
	n.getdata();
	n.show();
}
