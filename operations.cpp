//WAP that asks an arithmetic operator & performs the corresponding operation on the operand.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char op;
	
cout<<"Enter any two numbers: ";
	cin>>n1>>n2;
	cout<<"Enter operator: ";
	cin>>op;
	switch(op){
		case '+':
			cout<<n1<<"+"<<n2<<" = "<<n1+n2;
			break;
		case '-':
			cout<<n1<<"-"<<n2<<" = "<<n1-n2;
			break;
		case '*':
			cout<<n1<<"*"<<n2<<" = "<<n1*n2;
			break;
		case '/':
			cout<<n1<<"/"<<n2<<" = "<<float(n1)/n2;
			break;
		default:
		cout<<"Invalid Input";		
	}
	return 0;
}
