#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Barang
{
    int harga;
};

//Main Program
int main()
{
int n;          //jumlah barang
int max;        //harga tertinggi

    cin >> n;
    
    struct Barang barang[n];
    struct Barang temp;

    for (int i = 0; i < n; i++)
    {
        cin >> barang[i].harga;
    }
    
    //mengurutkan harga
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (barang[i].harga < barang[j].harga)
            {
                temp = barang[i];
                barang[i] = barang[j];
                barang[j] = temp;
            }
        }
    }

    cout << "Harga terendah: " << barang[n-1].harga << endl;
    cout << "Harga tertinggi: " << barang[0].harga;
    
	return 0;
}

