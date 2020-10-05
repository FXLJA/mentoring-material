#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int n;
	
	cout << "Jumlah baris: ";
	cin >> n;
	 
	cout << endl << endl;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (i == 1)
			{
				cout << i << " ";
			}
				else
				{
					cout << (i - 1) * 5 - j << " ";
				}
		}
		cout << endl;
	}
	cout << endl << endl;
	
	getch();
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < (n * 2) - i * 2; j++)
		{
			cout << " ";
		}
		
		for (int j = 0; j < i; j++)
		{
			if (i == 1)
			{
				cout << i << " ";
			}
				else
				{
					cout << (i - 1) * 4 + j << " ";
				}
		}
		
		for (int j = 1; j < i; j++)
		{
			if (i == 1)
			{
				cout << i << " ";
			}
				else
				{
					cout << (i - 1) * 5 - j << " ";
				}
		}
		
		cout << endl;
	}
	cout << endl;
	
	return 0;
}
