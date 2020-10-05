#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//Main Program
int main()
{
char nama[20];

    cin.getline(nama, 20);

    for (int i = strlen(nama) - 1; i >= 0; i--)
    {
       cout << nama[i];    
    } 

	return 0;
}
