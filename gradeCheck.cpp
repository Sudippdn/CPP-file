/*WAP where user inputs the number (0 - 100) to check grade of a student
hint:
num >= 90 A+ grade
num >= 80 A grade
num >= 70 B grade
num >= 60 C grade
num >= 50 D grade
num <50 && num >=0 Non Graded(NG)
num < 0 || num > 100 wrong number*/
#include <iostream>
using namespace std;
class checkNum
{
	int num;
	public:
		void getdata()
		{
			cout<<"Enter a number between 0-100: ";
			cin>>num;
			
		}
		void show()
		{
			if (num>=90 && num<100)
			{
				cout<<"A+ grade";
			}		
			else if(num>=80 && num<=90)
			{
				cout<<"A grade"<<endl;
			}
			else if(num>=70 && num<=80)
			{
				cout<<"B grade"<<endl;
			}
			else if(num>=60 && num<=70)
			{
				cout<<"C grade"<<endl;
			}
			else if(num>=50 && num<=60)
			{
				cout<<"D grade"<<endl;
			}
			else if(num>0 && num<=50)
			{
				cout<<"NG grade"<<endl;
			}
			else if(num==0 || num==100)
			{
				cout<<"Wrong number"<<endl;
			}
		}
};
int main()
{
	checkNum num;
	num.getdata();
	num.show();
}
