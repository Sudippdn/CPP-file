#include<iostream>
using namespace std;
template <class t>
t sort( t a[],int n){
	t temp;
	int i,j;

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i]= a[j];
				a[j] = temp;
					
		}
		}
	}
		for(i=0;i<n;i++){
		cout<<a[i]<<endl;
		
	}	
}
int main(){
	int n;
	int i,j;
	cout<<"Enter the number of array: ";
	cin>>n;
	int arr1[n];
	float arr2[n];
	cout<<"Enter integer numbers:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"Enter float numbers:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr2[i];
	}
	cout<<"Sorting in Ascending order of integer array: "<<endl;
	sort(arr1,n);
	cout<<"Sorting in Ascending order of integer array: "<<endl;
	sort(arr2,n);
	return 0;	
}

