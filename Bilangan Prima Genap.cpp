#include <iostream>

using namespace std;

//Main Program
int main()
{
int i;
int j;

	for (i = 2; i < 100; i++)
	{
		int faktor = 0;
		
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				faktor = 1;
				break;
			}
		}
		
		if (faktor == 0 && i % 2 == 0)
		{
			cout << i;
		}
	}
   
   return 0;
}
