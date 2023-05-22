/*2.Write a program using  overloaded function named area() 
that can be used to compute the area of triangle, rectangle as well as circle.*/
#include <iostream>
using namespace std;
class Geometry
{
	public:
	int length, height, radius, base;	 
	double breadth;
	public:
		void getdata()
		{
			cout<<"Enter the value of parameters: "<<endl;
			cout<<"Length = ";
			cin>>length;
			cout<<"Breadth = ";
			cin>>breadth;
			cout<<"Height = ";
			cin>>height;
			cout<<"Radius = ";
			cin>>radius;
			cout<<"Base = ";
			cin>>base;			
		}
		void area(int base, int height)
		{
			float AreaOfTriangle = (base*height)/2;
			cout<<"\nThe area of triangle is "<<AreaOfTriangle<<endl;
		}
		void area(int length,double breadth)
		{
			int AreaOfRectangle = length*breadth;
			cout<<"The area of rectangle is "<<AreaOfRectangle<<endl;
		}
		void area(int radius)
		{
			double pi= 3.14;
			double AreaOfCircle = pi*radius*radius;
			cout<<"The area of circle is "<<AreaOfCircle<<endl;
		}
	
};
int main()
{
	Geometry g1,g2,g3,g4;
	g1.getdata();
	g2.area(g1.base, g1.height);
	g3.area(g1.length, g1.breadth);
	g4.area(g1.radius);
}
