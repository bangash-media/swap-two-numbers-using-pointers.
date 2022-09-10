#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2; //declaring 2 variables
	int *a, *b; //declaring 2 pointers
	cout<<"Enter value 1: ";
	cin>>num1;
	cout<<"Enter value 2: ";
	cin>>num2; //taking 2 variables as input
	a=&num1; //pointing the pointers at the address
	b=&num2; //of the following number
	*a=*a+*b; //applying the logic for swap
	*b=*a-*b;
	*a=*a-*b;
	cout<<"Value 1 is now: "<<num1<<endl; //displaying the numbers
	cout<<"Value 2 is now: "<<num2<<endl;
	
	return 0;
}
