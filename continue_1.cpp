// Aprogram that illustrates the for loop 2
// Counts to 20, but includes specific messages epending on value of counter 
// Includes the continue statement, uses for_1.cpp
// To prevent the "special message" numbers from displaying twice!

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int counter;

	cout<< "Counting to 20... READY, SET, START!! \n";
	for(counter=1;counter<=20;counter++)
	{
		// Include special messages on counter values 7, 13, and 16
		if (counter == 7) { cout << "Lucky 7! \n"; continue; }
		if (counter == 13) { cout << "Unlucky 13!\n"; continue; }
	if (counter == 16) { cout << "Sweet 16!\n"; continue; }
		cout << counter << "\n";
	}

	getch();
	return 0;
}