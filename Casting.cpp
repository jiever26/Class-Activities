//This program illustrates how explicit type conversion works.

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout <<"static_cast<int>(7.9) = "
		 << static_cast<int>(7.9)
		 << endl;
	cout <<"static_cast<int>(3.3) = "
		 << static_cast<int>(3.3) 
		 << endl;
	cout << fixed << showpoint;
	cout <<"static_cast<double>(25) = "
		 << static_cast<double>(25) 
		 << endl;
	cout <<"static_cast<int>(7.8 + static_cast<double>(15/2)) = "
		 << static_cast<int>(7.8 + static_cast<double>(15/2)) 
		 << endl;
	getch();
	return 0;

}