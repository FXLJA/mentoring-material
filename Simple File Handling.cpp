#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

//Main Program
int main()
{
int x;
int y;
int total;
fstream myFile;

    cin >> x;
    cin >> y;
    
    total = add(x, y);
    
    myFile.open ("data.txt", ios::in | ios::out);
    myFile << total;

    system("start notepad.exe data.txt");
    

	return 0;
}
