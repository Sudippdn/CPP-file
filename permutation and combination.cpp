//Remalining lab reports of DS
/*9. WAP to find the permutation and combination 
 10. WAP to generate the hash value of a user input using folding method
 11. WAP to determine if the given input is equivalent or not
 12. WAP to print a graph */
#include <iostream>
using namespace std;
class PC
{
	int n,r;
	public:
		// getting the value of n and r
		void getdata()
		{
			int n, r;
		    cout << "Enter the value of n: ";
		    cin >> n;
		    cout << "Enter the value of r: ";
		    cin >> r;
		}
		// Function to calculate factorial
		int factorial(int num)
		{
			if (num==1)
			return 1;
		return factorial(num-1)*num;
		}
		// Function to calculate permutations
		int permutation(int n, int r) 
		{
    		return factorial(n) / factorial(n - r);
    	}
    	// Function to calculate combinations
		int combination(int n, int r) 
		{
    		return factorial(n) / (factorial(r) * factorial(n - r));
		}
		void displayResult()
		{
			int perm = permutation(n, r);
   			int comb = combination(n, r);
			cout << "Permutation: " << perm << endl;
   			cout << "Combination: " << comb << endl;
		}
};

int main() 
{
	PC pc;
	pc.getdata();
	pc.displayResult();
    return 0;
}


