#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void tugas()
{
int n;
char temp;

    cout << "Ukuran array: ";
    cin >> n;
    
    char myArray[n];
    
    cout << endl;
    
    cout << "Isi array: ";
    cin >> myArray;
    
    cout << endl;
    
    cout << "Isi array awal: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << myArray[i];
    }
    
    temp = myArray[0];
    myArray[0] = myArray[n - 1];
    myArray[n - 1] = temp;
    
    cout << endl;
    
    cout << "Isi array setelah ditukar: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << myArray[i];
    }
}

//Main Program
int main()
{
    tugas();
    
	return 0;
}

