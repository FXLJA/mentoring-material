#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int i;
int start;
int stop;
	
	cout << "Tahun awal	: "; 
	cin >> start;
	
	cout << "Tahun akhir	: "; 
	cin >> stop;
	
	cout << endl;
	
	for(i = start; i <= stop; i++)
	{
		if(i % 4 == 0)
		{
			if(i % 100 == 0)
			{
				if(i % 400 == 0)
				{
					if(i % 50 == 0)
					{
						if(i % 3 == 0)
						{
							cout << "Tahun kabisat yang kelipatan 50 yang habis dibagi 3: " << i << endl;
						}
					}
				}	
			}
				else 
				{
					if(i % 50 == 0)
					{
						if(i % 3 == 0)
						{
							cout << i << " merupakan tahun kabisat yang merupakan kelipatan 50 yang habis dibagi 3" << endl;
						}
					}
				}
		}
	}
	
	getch();
	return 0;
}
