#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

//Main Program
int main()
{
int i;		//iterasi 1, menentukan ukuran
int j;		//iterasi 2
int k;		//iterasi 3

int a;		//alas
int t;		//tinggi
int s;		//sisi
int p;		//panjang
int l;		//lebar
float r;	//radius
float m = 2.0;

int menu;	//main menu

	do
	{ //Open do
		system("CLS");
		
		cout << "\t==============" << endl
			 << "\tPola Geometri" << endl
			 << "\t==============" << endl << endl
			 << "1.  Segitiga Siku Kiri Bawah" << endl
			 << "2.  Segitiga Siku Kanan Atas" << endl
			 << "3.  Segitiga Siku Kiri Atas" << endl
			 << "4.  Segitiga Siku Kanan Bawah" << endl
			 << "5.  Segitiga Sama Kaki" << endl
			 << "6.  Segitiga Sama Kaki Rapat" << endl
			 << "7.  Segitiga Sama Kaki Cermin" << endl
			 << "8.  Segitiga Sama Kaki Cermin Rapat" << endl
			 << "9.  Belah Ketupat" << endl
			 << "10. Persegi" << endl
			 << "11. Persegi Panjang Horizontal" << endl
			 << "12. Persegi Panjang Vertikal" << endl
			 << "13. Jajargenjang" << endl
			 << "14. Trapesium" << endl
			 << "15. Lingkaran" << endl
			 << "16. Exit" << endl
			 << "~ ";
		cin >> menu;
		
		switch (menu)
		{ //Open switch
			//Kiri Bawah
			case 1:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
				
				for (i = 1; i <= t; i++)
				{
					for (j = 1; j <= i; j++)
					{
		  				cout << "*";
					}
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Kanan Atas
			case 2:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
							
				for (i = 1; i <= t; i++)
				{
					for (j = 1; j <= t; j++)
					{
						if (i <= j)
						{
							cout << "*";
						}
							else
							{
								cout << " ";
							}
					}
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Kiri Atas
			case 3:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
				
				for (i = 1; i <= t; i++)
				{
					for (j = t - i; j >= 0; j--)
					{
						cout << "*";
					}
					
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Kanan Bawah
			case 4:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
				
				for (i = t; i >= 1; i--)
				{
					for (j = i; j >= 1; j--)
					{
						cout << " ";
					}
					
					for (k = i; k <= t; k++)
					{
						cout << "*";
					}
					
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Sama Kaki
			case 5:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
								
				for (i = 1; i <= t; i++)
				{
					k = t - i;
				
					for(j = 1; j <= k; j++)
					{
						cout << " ";
					}
					
					for (j = 1; j <= i; j++)
					{
						cout << "* ";
					}
				
					cout << endl;
				}				
				getch();
				
				break;
			}
			
			//Sama Kaki Rapat
			case 6:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
				
				for (i = 1; i <= t; i++)
				{

					for (k = i; k < t; k++)
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
			
			//Cermin
			case 7:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
							
				for (i = 1; i <= t; i++)
				{
					for (j = 1; j <= t; j++)
					{
						if (i <= j)
						{
							cout << "* ";
						}
							else
							{
								cout << " ";
							}
					}
					cout << endl;
				}
				getch();
				
				break;				
			}
			
			//Cermin Rapat
			case 8:
			{
				system("CLS");
				cout << "Masukkan tinggi segitiga: ";
				cin >> t;
				cout << endl;
				
				for (i = t; i >= 1; i--)
				{
					for (k = i; k < t; k++)
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
			
			//Belah Ketupat
			case 9:
			{
				system("CLS");
				cout << "Masukkan baris: ";
				cin >> t;
				cout << endl;
				
				for (i = 0; i <= t; i++)
				{
					for (j = t - i; j >= 0; j--)
					{
						cout << " ";
					}
					
					for (k = 1; k <= (2 * i - 1); k++)
					{
						cout << "*";
					}
					
					cout << endl;
				}
				
				for (i = t; i >= 0; i--)
				{
					for (j = t - i; j >= 0; j--)
					{
						cout << " ";
					}

					for (k = (2 * i - 1); k >= 1; k--)
					{
						cout << "*";
					}

					cout << endl;
				}
				
				getch();
				
				break;
			}
			
			//Persegi
			case 10:
			{
				system("CLS");
				cout << "Masukkan sisi: ";
				cin >> s;
				cout << endl;
				
				for (i = 1; i <= s; i++)
				{
					for (j = 1; j <= s; j++)
					{
						cout << "* ";
					}
					
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Persegi panjang horizontal
			case 11:
			{
				system("CLS");
				cout << "Masukkan panjang: ";
				cin >> p;
				cout << "Masukkan lebar: ";
				cin >> l;
				cout << endl;
				
				for (i = 1; i <= l; i++)
				{
					for (j = 1; j <= p; j++)
					{
						cout << "* ";
					}
					
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Persegi panjang vertikal
			case 12:
			{
				system("CLS");
				cout << "Masukkan panjang: ";
				cin >> p;
				cout << "Masukkan lebar: ";
				cin >> l;
				cout << endl;
				
				for (i = 1; i <= p; i++)
				{
					for (j = 1; j <= l; j++)
					{
						cout << "* ";
					}
					
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Jajargenjang
			case 13:
			{
				system("CLS");
				cout << "Masukkan tinggi: ";
				cin >> t;
				cout << endl;
								
				for (i = 0; i < t; i++) 
				{
					for (j = 0; j < i; j++) 
					{
						cout << " ";
					}
					
					for (j = 0; j < t; ++j)
					{
						cout << "*";
					}
					
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Trapesium
			case 14:
			{
				system("CLS");
				cout << "Masukkan tinggi: ";
				cin >> t;
				cout << "Masukkan lebar alas: ";
				cin >> a;
				cout << endl;
				
				for (i = 0; i < t; i++) 
				{
					for (j = t - i; j > 0; j--) 
					{
						cout << " ";
					}
					
					for (j = 0; j < (a + 2 * i); j++) 
					{
						cout << "*";
					}
					cout << endl;
				}
				getch();

   				break;
			}
			
			//Lingkaran
			case 15:
			{
				system("CLS");
				cout << "Masukkan radius: ";
				cin >> r;
				
				r = (float) r;
				
				cout << endl;
								
				for (i = -r; i <= r; i++)
				{
					for (j = -r; j <= r; j++)
					{
						k =  pow(((i * m) / r), 2) + pow ((j / r), 2);
						
						if (k > 0.95 && k < 1.08)
						{
							cout << "*";
						}
							else
							{
								cout << " ";
							}
					}
					cout << endl;
				}
				getch();
				
				break;
			}
			
			//Exit
			case 16:
			{
				system("EXIT");
				break;
			}
			
			//Exception
			default:
			{
				cout << endl << endl << "Kurang AQUA ya?";
				getch();
				break;
			}
		} //Close switch
	} //Close do
	while (menu != 16);
	
	return 0;
}
