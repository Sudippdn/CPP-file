#include<iostream>
using namespace std;
class Matrix
{
 int row,col;
 int *ptr;
 public:
 Matrix()
 {
 	row=0;
 	col=0;
 	ptr=0;
  }	
  Matrix(int r,int c,int val)
  {
  	row=r;
  	col=c;
  	ptr=new int[r*c];
  	for(int i=0;i<r*c;i++)
  	{
  		ptr[i]=val;
	}
  	
  }
  void input() {
  	cout<<"Enter no. of rows of matrix: ";
  	cin>>row;
  	cout<<"Enter no. of columns of matrix: ";
  	cin>>col;
        ptr = new int[row * col];
        cout<< "Enter the matrix elements:" <<endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> ptr[i * col + j];
            }
        }
    }
    void display() {
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << ptr[i * col + j] << " ";
            }
            cout <<endl;
        }
    }
    ~Matrix() {  
    delete []ptr;
    cout<<endl<<endl<<"Destructor has been called: ";
    }
};
int main()
{
	Matrix m1(3,2,6),m2;
	cout<<"Matrix as per the parameterized constructor: "<<endl;
	m1.display();
	m2.input();
	m2.display();
	return 0;
}

