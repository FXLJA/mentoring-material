#include <iostream>
#include <conio.h>

using namespace std;

float luas (int a, int t)
{
	return 0.5 * a * t;
}

//Main Program
int main()
{
int alas;
int tinggi;

	cout << "Masukkan alas: ";
	cin >> alas;
	
	cout << "Masukkan tinggi: ";
	cin >> tinggi;
		
 	cout << "Luas segitiga adalah " << luas(alas, tinggi);

	return 0;
}

