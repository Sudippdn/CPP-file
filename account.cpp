#include<iostream>
using namespace std;
class Account {
 int acc_no;
 float amount;
public:
 Account() {
 acc_no = 0;
 amount = 0.0;
 }
 Account(int acc, float amt) {
 acc_no = acc;
 amount = amt;
 }
 Account(int acc) {
 acc_no = acc;
 amount = 0.0;
 }
 void get() {
 cout << "Enter your account number: ";
 cin >> acc_no;
 cout << "Enter your amount: ";
 cin >> amount;
 }
 void show() {
 cout << "Account details:" << endl;
 cout << "Account Number: " << acc_no << endl;
 cout << "Amount: " << amount << endl;
 }
 void transfer(Account &t, float amt) {
 if (amount >= amt) {
 t.amount += amt;
 amount -= amt;
 cout << "\nNRs. 7999.5 transferred successfully!\n" << endl;
 }
 else {
 cout << "Insufficient Balance" << endl;
 }
 }
};
int main()
{
 Account A1(11000, 5000.5), A2, A3;
 A1.show();
 cout<<"\n----Fill details----"<<endl;
 A2.get();
 cout<<"\n----Before transection------"<<endl;
 A2.show();
 A3 = A1;
 A3.show();
 A2.transfer(A1, 7999.5);
 cout<<"----After transection----"<<endl;
 A1.show();
 A2.show();
 return 0;
}

