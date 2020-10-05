#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

//Main Program
int main()
{
int n;
int faktor = 0;
bool isPrima = false;
bool isGenap = false;

	cin >> n;
	
	if (n == 2)
	{
		isPrima = true;
		isGenap = true;
	}
		else
		{
			if (n % 2 == 0)
			{
				isGenap = true;
			}
			
			for (int i = 1; i <= n; i++)
			{
				if (n % i == 0)
				{
					faktor++;
				}
			}
			
			if (faktor == 2)
			{
				isPrima = true;
			}
		}
		
	cout << endl;
	
	if (isGenap == true && isPrima)
	{
		cout << "Bilangan Genap dan Prima";
	}
		else if (isGenap == true && n != 2)
		{
			cout << "Bilangan Genap dan Bukan Prima";
		}
		
		else if (isGenap == false && isPrima == true)
		{
			cout << "Bilangan Ganjil dan Prima";
		}
			else
			{
				cout << "Bilangan Ganjil dan Bukan Prima";
			}

	return 0;
}

