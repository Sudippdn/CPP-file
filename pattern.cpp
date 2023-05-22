// WAP to display pattern (*) when user enters number of rows and columns.
#include <iostream>
using namespace std;
int main()
{
	int i, j, rows, columns;
	cout<<"Enter rows and columns: "<<endl;
	cout<<"Rows = ";
	cin>>rows;
	cout<<"Columns = ";
	cin>>columns;
	for (i=0; i<rows; i++){
	for(j=0; j<columns; j++)
	{
		cout<<"*";		
	}
	cout<<"\n";
	}
}
