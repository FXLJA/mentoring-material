#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

//Main Program
int main()
{
int x;
int y;
int count;
int changeX;
int changeY;
int newValue;

	cout << "Baris array: ";
	cin >> x;
	
	cout << "Kolom array: ";
	cin >> y;
	
	cout << endl;
	
	int value[x][y];
	
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cout << "Nilai awal array indeks [" << i << ", " << j << "] : ";
			cin >> value[i][j];
		}
	}
	
	cout << endl;
	
	cout << "Keadaan array saat ini:" << endl;
	
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cout << value[i][j] << "  ";
		}
		
		cout << endl;
	}

	cout << endl;
	
	cout << "Jumlah perubahan yang mau dilakukan: ";
	cin >> count;
	
	cout << endl;
	
	do
	{
		cout << "Indeks baris array yang mau diubah: ";
		cin >> changeX;
		changeX--;
		
		cout << "Indeks kolom array yang mau diubah: ";
		cin >> changeY;
		changeY--;
	
		cout << "Nilai baru indeks: ";
		cin >> newValue;
		value[changeX + 1][changeY + 1] = newValue;
		
		count--;
		
		cout << endl;
	}
	while (count != 0);
	
	cout << "Keadaan array sekarang:" << endl;
	
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cout << value[i][j] << " ";
		}
		
		cout << endl;
	}
		 
	return 0;
}
