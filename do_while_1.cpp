//Custom countdown using do-while
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cout<< "Enter the starting number: ";
	cin >> n;

	do
	{
		cout << n << ", ";
		n--;
	} while (n>0);

	cout << "FIRE!\n";
	getch();
	return 0;
}