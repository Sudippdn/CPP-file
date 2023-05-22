//write a cpp program using a fundtion with reference argument to get the maximum number of array
#include <iostream>
using namespace std;
int maxfunction(const int arr[], int number, int &maxnumber)
{
	maxnumber = arr[0];
	for(int i=1; i<number; i++)
	{
		if(arr[i]>maxnumber)
		{
			maxnumber = arr[i];
		}
	}
}
int main()
{
	int i,number;
	cout<<"Enter the number of data: ";
	cin>>number;
	int data[number];
	cout<<"Enter "<<number<<" datas"<<endl;
	for(i=0; i<number; i++)
	{
		cin>>data[i];
	}
	int maxnumber;
	maxfunction(data, number, maxnumber);
	cout<<"The max number is "<<maxnumber<<endl;
	return 0;	
}


