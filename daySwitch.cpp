//WAP to display days (Sunday - Saturday) when user inputs number (1 - 7) for Days
#include<iostream>
using namespace std;
class Day
{
	int day;
	public:
		void getdata()
		{
			cout<<"Enter (1-7) for Sunday to Saturday: ";
			cin>>day;
		}
		void showdata()
		{
			switch(day){
			case 1:
				cout<<"Sunday";
				break;
			case 2:
				cout<<"Monday";
				break;
			case 3:
				cout<<"Tuesday";
				break;
			case 4:
				cout<<"Wednesday";
				break;
			case 5:
				cout<<"Thursday";
				break;
			case 6:
				cout<<"Friday";
				break;			
			
			case 7:
				cout<<"Saturday";
				break;
			default:
				cout<<"Invalid Input";		
		}
}
};

int main()
{	
	Day d;
	d.getdata();
	d.showdata();
	return 0;
}
