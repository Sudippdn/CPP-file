#include <iostream>
using namespace std;
class stackdata{
protected:
		int top;
		int arr[5];
		public:
			stackdata(){
				top= -1;
				for(int i=0;i<5;i++){
					arr[i]=0;
				}
			}
};
class stackfunction : public stackdata{
	public:
	void push(int val){
		if(top==4){
			cout<<"stack overflow";	
		}
	else
	 top++;
	arr[top]=val;
}
int pop(){
	if(top==-1){
		cout<<"underflow condition"<<endl;
}
int popval=arr[top];
arr[top]=0;
top--;
return popval;
}
void display(){
	cout<<"stack elements"<<endl;
	for(int i=4;i>=0;i--){
		cout<<arr[i]<<endl;
	}
}
};
int main(){
	stackfunction s1;
	s1.display();
	s1.push(6);
	s1.push(7);
	s1.push(8);
	s1.display();
	s1.pop();
	s1.pop();
	s1.display();
	return 0;	
}

