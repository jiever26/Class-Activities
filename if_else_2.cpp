#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int a;
	cout<< "Enter Units completed: "; cin>>a;
	if (a < 32)
		cout<< "You are a Freshman. \n";
	else if (a>=32 && a<63)
		cout<< "You are a Sophomore. \n";
	else if (a>=63 && a<95)
		cout<< "You are a Junior. \n";
	else if (a>=95 && a<120)
		cout<< "You are a Senior. \n";
	else 
		cout<< "Invalid. \n";
	getch();
	return 0;

}