#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void addbilangan ();
void lihatisi();
void searching ();
int data[5];
int main ()
{
	int menu;

   do
   {
   	system("cls");

      cout<<"1. masukan bilangan kedalam array"<<endl;
      cout<<"2. lihat isi array "<<endl;
      cout<<"3. lihat spesifikasi array"<<endl;
      cout<<"4. lakukan searching pada array "<<endl;
      cout<<"5. exit"<<endl;
      cin>>menu;

		switch (menu)
        {
        case 1:
        {
            addbilangan();
            break;
        }
        case 2 :
        {
           lihatisi();
           break;
        }
        case 3 :
        {
            //lihatinformasi();
            break;
        }
        case 4:
        {
            searching();
            break;
        }
        case 5:
        {
        		("EXIT");
            break;
         }
        default:
        {
            cout<<"Pilihan Salah";
            break;
        }
        }
    }
    while (menu!=5);
    return 0;

  }
void addbilangan()
{
	system("cls");

   for(int i=0;i<5;i++)
   {
   	cout<<"input data ke-"<<i<<":";
      cin>>data[i];
   }

}
void lihatisi()
{
	system("cls");

   for(int i=0;i<5;i++)
   {
   	cout<<data[i]<<" ";
   }
   getch ();
}
/**void lihatinformasi()
{

}
**/
void searching()
{
	system("cls");

	int c;
   cout<<"data yang ingin dicari:";
   cin>>c;
  for(int i=0;i<5;i++)
  {
  		if(data[i]==c)
      {
      	cout<<"data "<<c<<"ditemukan pada indeks ke- "<<i;
      }
  }
getch ();
}
