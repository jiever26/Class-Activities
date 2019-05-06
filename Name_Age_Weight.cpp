
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	
    int age;
	double weight;
    string	FirstName, LastName;

	cout<< "Enter the following data.." << endl;
    cout << "Enter You First Name Please: ";
    cin >> FirstName;
    cout << "Enter Your Last Name Please: " ;
    cin >> LastName;
	cout <<"Enter Your Age Please: ";
	cin>> age;
	cout<<"Enter Your Weight Please: ";
	cin>> weight;
	cout<< FirstName<< "  "<< LastName << "  " << age << "  years old " << weight << "   kilograms " << endl;
	getch();
	return 0;

}