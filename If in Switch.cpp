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

	switch (a)
	{
		case 1:
		{
				if (b == 1)
				{
					benda = "Tomat";
				}
				
				if (b == 3)
				{
					benda = "Kubus berwarna merah";
				}
				
			break;
		}
		
		case 2:
		{
			if (b == 2)
			{
				benda = "Kertas dari suatu buku";
			}
			
			break;
		}
		
		case 3:
		{
			if (b == 1)
			{
				benda = "Buah jeruk";
			}
				else if (b == 3)
				{
					benda = "Kubus berwarna orange";
				}
				
			break;
		}
		
		case 4:
		{
			if (b == 1)
			{
				benda = "Semangka";
			}
				else
				{
					benda = "entah apaan";
				}
			
			break;
		}
	}
	
	cout << "Saya adalah " << benda << endl;
	
	getch();
	return 0;
}
