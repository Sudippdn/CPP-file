//8.Write a program overloading  a relational operator <= which in turn can be
//used for the user defined objects for a class distance to compare the two distance objects. 
#include <iostream>
using namespace std;
class distance
{
	int km,m,cm;
	public:
		void getdata()
		{
			cout<<"--Distance-- "<<endl;
			cout<<"Km m and cm = ";
			cin>>km>>m>>cm;
		}	
		void showResult()
		{
			
			distance d6, d7;
			if(d6.km>d7.km || d6.m>d7.m || d6.cm>d7.cm)
			{
				cout<<"First distance is greater than second one!";
			}
			else
			cout<<"Second distance is greater than first one!";
		}
};
int main()
{
	
	distance s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.showResult(d1,d2);
	return 0;
}
