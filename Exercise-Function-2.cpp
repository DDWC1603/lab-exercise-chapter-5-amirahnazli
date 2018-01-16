//this is an unfinish program
//finish up this program
//nur amirah afiqah
//a17dw2172

#include <iostream>


using namespace std;
// function prototype
int add(int, int);

int main()

{
	int num1, num2, sum;
	
	cout<< "Enter 2 Number : ";
	cin>> num1 >>num2;
	add(num1,num2);
	return 0;
	
}

//function definition

int add(int x, int y)
{
	int add;
	add=x+y;
	
	cout<<"Total is = " <<add;
	//return statement
	//return add;
}
