#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

//Main Program
int main()
{
char nama[30];

	cout << "Input nama: ";
	cin.getline(nama, 30);
	
	for (int i = 0; i <= strlen(nama); i++)
	{
		nama[i] = toupper(nama[i]);
	}

	for (int i = strlen(nama) - 1; i >= 0; i--)
	{
		cout << nama[i];
	}
	
	return 0;
}
