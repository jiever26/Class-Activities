// Custom countdown using while
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cout<< "Enter starting number: ";
	cin >> n;
	while (n>0)
	{
		cout << n << ", ";
		n--;
	}

	cout << "FIRE!\n";
	getch();
	return 0;

}