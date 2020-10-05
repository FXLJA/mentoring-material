#include <iostream>
#include <conio.h>

using namespace std;

float a;
float b;
float c;
float d;

float hasil(float tm, float uts, float uas)
{
    return (0.3 * tm) + (0.3 * uts) + (0.4 * uas);
}

int main()
{
    cout << " Masukkan nilai" << endl;

    cout << " Nilai Tugas: ";
    cin >> a;

    cout << " Nilai UTS: ";
    cin >> b;

    cout << " Nilai UAS: ";
    cin >> c;

    d = hasil(a, b, c);

    cout << "Hasil akhir = " << d << endl;

    if(d >= 80 && d<=100)
    {
        cout <<  "Grade A";
    }
        else if(d >= 73 && d<=79.99)
        {
            cout <<  "Grade B+";
        }

        else if (d >= 66 && d <= 72.99)
        {
            cout << "Grade B";
        }

        else if (d >= 58 && d <= 65.99)
        {
            cout << "Grade C+";
        }

        else if (d >= 51 && d <= 57.99)
        {
            cout << "Grade C";
        }

        else if (d >= 41 && d <= 50.99)
        {
            cout << "Grade D";
        }

        else if (d >= 0 && d <= 40.99)
        {
            cout << "Grade E";
        }

        else if (d >= 0 && d <= 0.99)
        {
            cout << "Grade K";
        }

   getch();
   return 0;
}
