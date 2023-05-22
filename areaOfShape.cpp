#include<iostream>
using namespace std;
class Shape{
	public:
		double dim1,dim2;
		void getdata(){
			cout<<"Enter the first dimension: ";
			cin>>dim1;
			cout<<"Enter the second dimension: ";
			cin>>dim2;
		}
		virtual void display_area(){
			cout<<"Area of figure is: "<<dim1*dim2;
		}
};
class Triangle:public Shape{
	public:
	void display_area(){
		cout<<"Area of triangle: "<<0.5*dim1*dim2<<endl;
	}
};

class Rectangle:public Shape{
	public:
		void display_area(){
			cout<<"Area of rectangle is: "<<dim1*dim2<<endl;
		}
};
int main(){
	Triangle T1;
	Rectangle R1;
	char choice;
	cout<<"Enter shape(t for triangle,r for rectangle): ";
	cin>>choice;
	switch (choice){
		case 't':
			T1.getdata();
			T1.display_area();
			break;
		case 'r':
			R1.getdata();
			R1.display_area();
			break;
		default:
			cout<<"Invalid Input: ";
			break;
	}
	return 0;
}

