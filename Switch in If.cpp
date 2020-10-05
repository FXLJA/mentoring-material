#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

//Main Program
int main()
{
int a;
int b;
string benda;

	cout << "A --->  1. Merah" << endl
		 << "        2. Putih Bergaris" << endl
		 << "        3. Orange" << endl
		 << "        4. Hijau Bergaris" << endl
		 << endl << endl
		 << "B ---> 1. Bulat" << endl
		 << "       2. Lembaran Persegi Panjang" << endl
		 << "       3. Kubus" << endl
		 << endl
		 << "Kombinasi: ";
	cin >> a >> b;

	if (a == 1)
	{
		switch (b)
		{
			case 1:
			{
				benda = "Tomat";
				break;
			}
			
			case 3:
			{
				benda = "Kubus berwarna merah";
				break;
			}
		}
	}
		else if (a == 2)
		{
			switch (b)
			{
				case 2:
				{
					benda = "Kertas dari suatu buku";
					break;
				}
			}
		}
		
		else if (a == 3)
		{
			switch (b)
			{
				case 1:
				{
					benda = "Buah jeruk";
					break;
				}
				
				case 3:
				{
					benda = "Kubus berwarna orange";
					break;
				}
			}
		}
	
		else if (a == 4)
		{
			switch (b)
			{
				case 1:
				{
					benda = "Semangka";
					break;
				}
				
				default:
				{
					benda = "entah apaan";
				}
			}
		}
			else
			{
				cout << endl << "Saya tidak tahu siapa saya";
				return 0;
			}
	
	cout << "Saya adalah " << benda << endl;
	
	getch();
	return 0;
}
