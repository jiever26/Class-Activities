#include <iostream>
#include <conio.h>
using namespace std;

int main()

{ 
	char a;
	cout << "Enter a letter: "; cin>>a;
	switch(a)
	{
	case 'a':
	case 'A':
		cout<< "You're Adorable! ";
		break;
	case 'b':
	case 'B':
		cout<< "You're so Beautiful! ";
		break;
	case 'c':
	case 'C':
		cout<< "You're so cute & full of charm! ";
		break;
	case 'd':
	case 'D':
		cout<< "I AM IRONMAN and I LOVE YOU 3000! ";
		break;
	}

	getch();
	return 0;

}