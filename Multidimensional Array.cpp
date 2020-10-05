#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int dat[] = {12, 2, 42, 51, 90, 25, 17, 99, 90, 18};
int tmp[] = {19, 21, 22, 34, 97, 20, 21, 29, 51, 29};
int arr[5][10];

//Main Program
int main()
{
int menu;

    do
    {
        system("CLS");
        
        cout << "Menu" << endl
             << "=====" << endl
             << "1. Isi array 2D baris 0 dan 1" << endl
             << "2. Maksimum" << endl
             << "3. Penjumlahan" << endl
             << "4. Perkalian" << endl
             << "5. Tampilkan semua isi array dalam bentuk tabel" << endl
             << "0. Keluar" << endl
             << "~ ";
        cin >> menu;
        
        cout << endl;
        
        switch (menu)
        {
            case 1:
            {
                //baris 1
                for (int i = 0; i <= 9; i++)
                {
                    arr[0][i] = dat[i];
                }
            
                //baris 2
                for (int j = 0; j <= 9; j++)
                {
                    arr[1][j] = tmp[j];
                }
        
                //display
                for (int i = 0; i <= 4; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        cout << arr[i][j] << "\t";
                    }
                    
                    cout << endl;
                }
                
                getch();
                break;
            }
            
            case 2:
            {
                //baris 3
                for (int k = 0; k <= 9; k++)
                {
                    arr[2][k] = max(arr[0][k], arr[1][k]);
                }
                
                //display
                for (int i = 0; i <= 4; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        cout << arr[i][j] << "\t";
                    }
                    
                    cout << endl;
                }
                                
                getch();
                break;                         
            }
            
            case 3:
            {
                //baris 4
                for (int l = 0; l <= 9; l++)
                {
                    arr[3][l] = arr[0][l] + arr[1][l];
                }
                
                //display
                for (int i = 0; i <= 4; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        cout << arr[i][j] << "\t";
                    }
                    
                    cout << endl;
                }
                                
                getch();
                break;      
            }
            
            case 4:
            {
                //baris 5
                for (int m = 0; m <= 9; m++)
                {
                    arr[4][m] = arr[0][m] * arr[1][m];
                }                
                
                //display
                for (int i = 0; i <= 4; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        cout << arr[i][j] << "\t";
                    }
                    
                    cout << endl;
                }
                                
                getch();
                break;    
            }
            
            case 5:
            {
                //full display
                for (int i = 0; i <= 4; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        cout << arr[i][j] << "\t";
                    }
                    
                    cout << endl;
                }
                
                getch();
                break;                     
            }
            
            default:
            {
                cout << endl << "Am I a joke to you?";
                break;
            }
        }
    }
    while (menu != 0);
    
	return 0;
}
