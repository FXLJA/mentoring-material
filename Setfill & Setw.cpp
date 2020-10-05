#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
int a = 1, b = 0, c = 3;

    for(int i = 0; i < 5; i++)
    {
    cout << a << b << c << setfill ('0') << setw (3) << i << endl;
    }

return 0;
}
