//WAP to print multiplication table of n.
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter number to show multiplication table :";
	cin>>n;
	cout<<"The multiplication table is :"<<endl;
	
for(i=0;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<i*n<<endl;
	}
	return 0;
}
