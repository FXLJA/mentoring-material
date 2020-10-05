#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

char nama[30];
int nim;
int t;
int i;
int j;
int k;

void display();
void inputID();
void viewID();
void viewShape();
void shapeTree();
void shapeDiamond();
void riddle();
void salary();

//Main Program
int main()
{
    display();

    return 0;
}

void display()
{
int menu;

    do
    { //Open do
        system("CLS");

		cout << "=======WELCOME=======" << endl
			 << "1. Input identitas" << endl
			 << "2. Lihat identitas" << endl
			 << "3. Lihat bentuk" << endl
			 << "4. Riddle game" << endl
			 << "5. Hitung gaji karyawan" << endl
			 << "6. Exit" << endl
			 << "~ ";
		cin >> menu;

		cout << endl;

		switch (menu)
		{ //Open switch
            case 1:
            {
                inputID();
                break;
            }

            case 2:
            {
                viewID();
                break;
            }

            case 3:
            {
                viewShape();
                break;
            }

            case 4:
            {
                riddle();
                break;
            }

            case 5:
            {
                salary();
                break;
            }

            case 6:
            {
                system("EXIT");
                break;
            }

            default:
            {
                cout << "Pilihan salah";
            }
		} //Close switch
    } //Close do
    while(menu != 6);
}

void inputID()
{
    system("CLS");

    cout << "Nama	: ";
    cin.ignore();
    cin.getline(nama, 30);

    cout << "NIM	: ";
    cin >> nim;

    cout << endl << "Data tersimpan";
    getch();
}

void viewID()
{
    system("CLS");

    cout << "Nama	: " << nama << endl
         << "NIM	: " << nim << endl;
    getch();
}

void shapeTree()
{
    cout << "Masukkan tinggi: ";
    cin >> t;

    for (i = 1; i <= t; i++)
    {
        for (k = i; k < t; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i % 2 == 1)
            {
                cout << "@";
            }
                else
                {
                    cout << "*";
                }
        }

        cout << endl;
    }

    getch();
    system("CLS");
}

void shapeDiamond()
{
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
    system("CLS");
}

void viewShape()
{
int submenu;

    system("CLS");

    do
    {
        cout << "=======LIHAT BENTUK=======" << endl
             << "1. Pohon natal" << endl
             << "2. Diamond" << endl
             << "3. Kembali ke menu utama" << endl
             << "~ ";
        cin >> submenu;

        cout << endl;

        switch (submenu)
        {
            case 1:
            {
                shapeTree();
                break;
            }

            case 2:
            {
                shapeDiamond();
                break;
            }

            default:
            {
                cout << "Pilihan salah";
            }
        }
    }
    while (submenu != 3);
}

void riddle()
{
int a;
int b;

    system("CLS");

    cout << "Input A: ";
    cin >> a;

    cout << "Input B: ";
    cin >> b;

    if (a == 1)
    {
        if (b == 1)
        {
            cout << "Saya adalah Tomat" << endl;
        }
            else if (b == 3)
            {
                cout << "Saya adalah Kubus berwarna Merah" << endl;
            }
    }
        else if (a == 2)
        {
            if (b == 2)
            {
                cout << "Saya adalah kertas dari suatu buku" << endl;
            }

        }

        else if (a == 3)
        {
            if(b == 1)
            {
                cout << "Saya adalah buah Jeruk" << endl;
            }
                else if (b == 3)
                {
                    cout << "Saya adalah kubus berwarna Orange" << endl;
                }
        }

        else if (a == 4)
        {
            if (b == 1)
            {
                cout << "Saya adalah Semangka" << endl;
            }
        }
            else
            {
                cout << "Saya tidak tahu siapa saya" << endl;
            }

    getch();
    system("CLS");
}

void salary()
{
char nama [50];
char golongan;
int gaji;

    system("CLS");

    cout << "Nama : ";
    cin.ignore();
    cin.getline(nama,50);

    cout << "Golongan : ";
    cin >> golongan;

    if (golongan == 'A' || golongan == 'a')
    {
        gaji = 7000000;

    }
        else if (golongan == 'B' || golongan == 'b')
        {
            gaji = 6000000;
        }

        else if (golongan == 'C' || golongan == 'c')
        {
            gaji = 5000000;
        }
            else
            {
                cout << "Golongan tidak diketahui" << endl;
            }

    cout << endl;

    cout << "Nama: " << nama << endl;
    cout << "Golongan: " << golongan << endl;
    cout << "Gaji: " << gaji << endl;

    getch();
    system("CLS");
}
