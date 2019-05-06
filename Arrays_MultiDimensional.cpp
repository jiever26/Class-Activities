#include <iostream>
#include <conio.h>

using namespace std;
char representative [2][20] = {"Armstrong, Wendy", "Beauty, Eve"}; //Each have different article available 
int articleCount [2][5]= { {20, 51, 30, 17, 44}, {150, 120, 90, 110, 88}};


int main()
{
	for (int i=0; i<2; i++)
	{
		cout<<"\nRepresentative: "<< representative[i];
		cout<<"\nNumber of items sold: ";

		for (int j=0; j<5; j++)
		{
			cout<< articleCount [i][j]<< ",";
		}
	}

	getch();
	return 0;
}