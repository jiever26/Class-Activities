// break/continue nested loops
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, j;

	// Outer loop
	for (i=1; i<=5; i++)
	{
		// this will skip 3
		if(i==3) continue;
		cout << i << " ";
	    //Inner loop
		for (j=1; j<=5; j++) 
	{
		//this will only count up to 3 
		if (j==4) break;
		cout << j << " ";
	}
		cout << endl;
}

        getch();
        return 0;
}
