//WAP to find the sum of first 10 natural numbers.
#include<iostream>
using namespace std;
int main()
{
	int sum,n;
	sum = 0;
	for(n=1;n<=10;n++)
	{
		sum += n;
	
	}
	cout<<"The sum of first 10 natural number is "<<sum;
	return 0;
}
