/* This program illustrates the usage of the if-else statement and relational operators */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ 
	int a,b; 
	cout<< "Enter first number:  "; cin>>a;
	cout<< "Enter second number:  "; cin>>b;
	if (a < b)
		cout << "First number is less than second. \n";
	else if (a > b)
		cout << "Second is less than the first. \n";
	else
		cout << "They are equal. \n";
	
	getch();
	return 0;


}
