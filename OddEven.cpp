//WAP to check whether a given number is odd or even.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	if(num % 2 == 0){
		cout<<"EVEN NUMBER";
	}
	else{
		cout<<"ODD NUMBER";
	}
	return 0;
}
