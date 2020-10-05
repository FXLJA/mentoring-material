#include <iostream>
#include <conio.h>

using namespace std;

//Main Program
int main()
{
int menu;
int submenu;

char nama[30];
int nim;

	do
	{
		system("CLS");
		
		cout << "=======WELCOME=======" << endl
			 << "1. Input identitas" << endl
			 << "2. Lihat identitas" << endl
			 << "3. Hitung luas" << endl
			 << "4. Lihat bentuk" << endl
			 << "5. Exit" << endl
			 << "~ ";
		cin >> menu;
		
		switch (menu)
		{
			case 1:
			{
				system("CLS");
				
				cout << "Nama	: ";
				cin.ignore();
				cin.getline(nama, 30);
				
				cout << "NIM	: ";
				cin >> nim;
				
				cout << endl << "Data tersimpan";
				getch();
				
				break;
			}
			
			case 2:
			{
				system("CLS");
				
				cout << "Nama	: " << nama << endl
					 << "NIM	: " << nim << endl;
				getch();	 
				
				break;
			}
			
			case 3:
			{
				system("CLS");
				
				cout << "Hitung luas:" << endl
					 << "1. Luas segitiga" << endl
					 << "2. Luas lingkaran" << endl
					 << "3. Back" << endl
					 << "~ ";
				cin >> submenu;
				
				cout << endl;
				
				switch(submenu)
				{
					case 1:
					{
						int a;
						int t;
						
						cout << "Masukkan alas	: ";
						cin >> a;
						
						cout << "Masukkan tinggi	: ";
						cin >> t;
						
						cout << endl << "Luas segitiga: " << (a * t) / 2 << endl;
						getch();
						
						break;
					}
					
					case 2:
					{
						int r;
						float pi = 3.14;
						
						cout << "Masukkan radius	: ";
						cin >> r;
						
						cout << endl << "Luas lingkaran: " << pi * r * r << endl;
						getch();
						
						break;
					}
					
					case 3:
					{
						break;
					}
				}
				
				break;
			}
			
			case 4:
			{
				system("CLS");
				
				cout << "Lihat bentuk:" << endl
					 << "1. Segitiga siku-siku" << endl
					 << "2. Segitiga sama kaki" << endl
					 << "3. Back" << endl
					 << "~ ";
				cin >> submenu;
				
				cout << endl;
				
				switch(submenu)
				{
					case 1:
					{
						int n;
						int i;
						int j;
						
						cout << "Masukkan baris: ";
						cin >> n;
						
						cout << endl;
						
						for (i = 1; i <= n; i++)
						{
							for (j = 1; j <= i; j++)
							{
				  				cout << "* ";
							}
							cout << endl;
						}
						getch();
						
						break;
					}
					
					case 2:
					{
						int i;
						int j;
						int k;
						int n;
						
						cout << "Masukkan baris: ";
						cin >> n;
						
						cout << endl;
						
						for (i = 1; i <= n; i++)
						{
		
							for (k = i; k < n; k++)
							{
								cout << " ";
							}
		
							for (j = 1; j <= (2 * i - 1); j++)
							{
								cout << "*";
							}
							
							cout << endl;
						}
						getch();  
						
						break;
					}

					case 3:
					{
						break;
					}
				}
				
				break;
			}
			
			case 5:
			{
				system("EXIT");
			}
		}
	}
	while (menu != 5);

	return 0;
}
