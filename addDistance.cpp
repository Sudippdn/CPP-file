/*4.Write a program defining a  class called distance with member data meter, centimeter, kilometer.
  Introduce member functions getdata(), show() and function to add  the two objects of  class 
 distance and  returning object. Use reference arguments in the function for addition.*/
 #include <iostream>
 using namespace std;
 class Distance 
 {
 	int meter, centimeter, kilometer;
 	public:
 		void getdata()
 		{
 			cout<<"\n---Enter the values of the following---"<<endl;
 			cout<<"Kilometer = "; 
 			cin>>kilometer;
			cout<<"Meter = ";
 			cin>>meter;
 			cout<<"Centimeter = ";
 			cin>>centimeter;		
 			
		}
		void show()
		{
			cout<<"Distance = "<<kilometer<<"km "<<meter<<"m "<<centimeter<<"cm "<<endl;	
		}
		void addDistance(Distance s1,Distance s2)
		{
		kilometer = s1.kilometer + s2.kilometer;
		meter = s1.meter + s2.meter;
		kilometer =kilometer + meter / 1000;
        meter = meter%1000;
        centimeter = s1.centimeter + s2.centimeter;
        meter = meter + centimeter/100;
        centimeter = centimeter%100;
        }
        void showAddition()
        {
        	cout<<"\nAddition of above distance is "<<kilometer<<"km "<<meter<<"m "<<centimeter<<"cm "<<endl;	
		}
 };
 int main()
 {
 	Distance g1,g2,g3;
 	g1.getdata();
 	g1.show();
 	g2.getdata();
 	g2.show();
 	g3.addDistance(g1,g2);
 	g3.showAddition();
 	return 0;
 	
 }
