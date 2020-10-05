#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
char name[50], 
JnsKel[10];

string ruangan, 
an, 
NamaDr;

char alamat[50], 
diagnosa[50];

int dokter, 
kamar, 
lama, 
rm;

long int HrgKamar, 
JasaDr, 
TotalObat, 
tindakan;

    cout<<"Nama            = ";
    cin>>name;
    
    cout<<endl;
    
    cout<<"No. Rekam Medis = ";
    cin>>rm;
    
    cout<<endl;
    
    cout<<"Alamat          = ";
    cin>>alamat;
    
    cout<<endl;
    
    cout<<"Jenis Kelamin   = ";
    cin>>JnsKel;
    
    cout<<endl;
    
    cout<<"Lama Menginap     = ";
    cin>>lama;
    
    cout<<endl;
    
    cout<<"Diagnosa         = ";
    cin>>diagnosa;
    
    cout<<endl;
    
    system("CLS");
    
    cout<<"Pilih Jenis Kamar:\n";
    cout<<"1. Flamboyan\n";
    cout<<"2. Melati\n";
    cout<<"3. Anggrek\n";
    cout<<"4. Mawar\n";
    cout<<"5. VIP\n";
    cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";
    cin>>kamar;
    
    switch (kamar)
    {
        case 1:
    
        ruangan="Flamboyan";
        cout<<"--- "<<ruangan<<" ---";
        HrgKamar=850000;
    
        break;
    
        case 2:
        ruangan="Melati";
        cout<<"--- "<<ruangan<<" ---";
        HrgKamar=1000000;
    
        break;
    
        case 3:
        ruangan="Anggrek";
        cout<<"--- "<<ruangan<<" ---";
        HrgKamar=1300000;
    
        break;
    
        case 4:
        ruangan="Mawar";
        cout<<"--- "<<ruangan<<" ---";
        HrgKamar=1800000;
    
        break;
    
        case 5:
    
        ruangan="VIP";
        cout<<"--- "<<ruangan<<" ---";
        HrgKamar=2450000;
    
        break;
    
        default:
    
        cout<<"Tidak Tersedia";
    
    }
    
    system("CLS");
    
    cout<<endl;
    
    cout<<"Pilih Dokter:\n";
    
    system("CLS");
    
    cout<<endl;
    
    cout<<"Pilih Dokter:\n";
    cout<<"1. Dokter Umum\n";
    cout<<"2. Dokter Anak\n";
    cout<<"3. Dokter Penyakit Dalam\n";
    cout<<"4. Dokter THT\n";
    cout<<"5. Dokter Bedah Umum\n";
    cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";
    cin>>dokter;
    
    switch (dokter)
    {
        case 1:
    
        NamaDr="Dokter Umum";
        cout<<"--- "<<NamaDr<<" ---";
        JasaDr=145000;
    
        break;
    
        case 2:
    
        NamaDr="Dokter Anak";
        cout<<"--- "<<NamaDr<<" ---";
        JasaDr=200000;
    
        break;
    
        case 3:
    
        NamaDr="Dokter Penyakit Dalam";
        cout<<"--- "<<NamaDr<<" ---";
        JasaDr=170000;
    
        break;
    
        case 4:
    
        NamaDr="Dokter THT";
        cout<<"--- "<<NamaDr<<" ---";
        JasaDr=150000;
    
        break;
    
        case 5:
    
        NamaDr="Dokter Bedah Umum";
        cout<<"--- "<<NamaDr<<" ---";
        JasaDr=150000;
    
        break;
    }
    
     system("CLS");
    
    
    cout<<endl;
    
    cout<<"Nama             = "<<name<<endl;
    cout<<"No. Rekam Medis  = "<<rm<<endl;
    cout<<"Jenis Kelamin    = "<<JnsKel<<endl;
    cout<<"Jenis Kamar      = "<<ruangan<<endl;
    cout<<"Dokter Tujuan    = "<<NamaDr<<endl;
    cout<<"========================================="<<endl;
    cout<<"     TOTAL YANG HARUS DIBAYAR        \n";
    cout<<"Nama Pasien      = "<<name<<endl;
    cout<<"No. Rekam Medis  = "<<rm<<endl;
    cout<<"Atas Nama        = ";
    cin>>an;
    cout<<"Dokter           = "<<NamaDr<<endl;
    cout<<"Jasa Dokter      = Rp. "<<JasaDr<<endl;
    cout<<"Kamar Inap       = "<<ruangan<<"   Rp. "<<HrgKamar<<endl;
    cout<<"Lama Menginap    = "<<lama<<" hari"<<endl;
    cout<<"Total            = Rp. "<<HrgKamar * lama<<endl;
    cout<<"Total Obat       = Rp. ";
    cin>>TotalObat;
    cout<<"Tindakan         = Rp. ";
    cin>>tindakan;
    
    long int TotalBiaya;
    TotalBiaya = JasaDr + HrgKamar + TotalObat + tindakan;
    cout<<"Total Biaya      = Rp. "<<TotalBiaya;
    getch();
}
