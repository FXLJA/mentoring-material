#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//Main Program
int main()
{
int a;

	cin >> a;
	
	if (a == 0)
	{
		cout << "Nama saya Lisa";
	}
		else
		{
			if (a % 2 == 0)
			{
				cout << "Nama saya Wulan";
			}
				else
				{
					cout << "Nama saya Irene";
				}
		}

	getch();
	return 0;
 }

