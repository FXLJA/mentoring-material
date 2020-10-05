#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

//Main Program
int main()
{
int menu;
char nama [50];
int nim;
	do
	{
		cout<<"1. Input Identitas"<<endl
			<<"2. Lihat Identitas"<<endl
			<<"3. Lihat Bentuk"<<endl
			<<"4. Game Riddle"<<endl
			<<"5. Hitung Gaji"<<endl
			<<"Pilihan anda: ";
		cin>>menu;
			
		system("cls");	
		switch (menu)
		{
			case 1: 
			{
				cout<<"Nama: ";
				cin.ignore();
				cin.getline(nama,50);
				
				cout<<"Nim: ";
				cin>>nim;
				
				cout<<"Data anda telah tersimpan";
				getch();
				break;
			}
			
			case 2: 
			{
				cout<<"nama : "<<nama<<endl;
				cout<<"nim : "<<nim<<endl;
				
				getch();
				system("cls");
				break;
			}
			
			case 3 :
					//skip
					break;
			case 4 : 
			{
				int a,b;
				
				system("cls");
				
				cout<<"Input A: ";
				cin>>a;
				
				cout<<"Input B: ";
				cin>>b;
				
				if(a==1)
				{
					if(b==1)
					{
						cout<<"Saya adalah Tomat"<<endl;
					}				
						else if(b==3)
						{
							cout<<"Saya adalah Kubus berwarna Merah"<<endl;
						}
				}	
					else if(a==2)
					{	
						if(b==2)
						{
							cout<<"Saya adalah kertas dari suatu buku"<<endl;
						}
						
					}		
				
					else if(a==3)
					{
						if(b==1)
						{
							cout<<"Saya adalah buah Jeruk"<<endl;
						}
							else if(b==3)
							{
								cout<<"Saya adalah kubus berwarna Orange"<<endl;
							}
					}
						
					else if(a==4)
					{
						if(b==1)
						{
							cout<<"Saya adalah Semangka"<<endl;
						}
					}
						else
						{
							cout<<"Saya tidak tahu siapa saya"<<endl;
						}
						
				getch();
				system("cls");
				
				break;
			}
			
			case 5:	
			{
				char nama [50];
				char golongan;
				int gaji;
				
				system("cls");
				
				cout<<"nama : ";
				cin.ignore();
				cin.getline(nama,50);
				
				cout<<"golongan : ";
				cin>>golongan;
				
				if(golongan=='A'||golongan=='a')
				{
					gaji=7000000;
			
				}
					else if (golongan=='B'||golongan=='b')
					{
						gaji=6000000;
					}
					
					else if (golongan=='C'||golongan=='c')
					{
						gaji=5000000;
					}
						else
						{
							cout<<"golongan tidak diketahui"<<endl;
						}
						
				system("cls");
				
				cout<<"nama: "<<nama<<endl;
				cout<<"golongan: "<<golongan<<endl;
				cout<<"gaji: "<<gaji<<endl;
				
				getch();
				system("cls");
				break;
			}
		}
	} 
	while (menu!=5);
	
	return 0;
}
