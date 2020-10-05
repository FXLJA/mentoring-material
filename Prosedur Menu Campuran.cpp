#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

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
int submenu;


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
                //inputID();
                break;
            }

            case 2:
            {
                //viewID();
                break;
            }

            case 3:
            {
                //viewShape();
                break;
            }

            case 4:
            {
                //riddle();
                break;
            }

            case 5:
            {
                //salary();
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
