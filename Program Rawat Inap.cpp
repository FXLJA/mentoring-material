#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

char jk;
string login;
int pasienCount = 0;
stringstream ss;

//Data pasien
struct Pasien
{
    int umur;
    char kodeD;
    char kodeR;
    char kodeT;
    int durasi;
    long hargaO;
    long hargaT;
    long hargaR;
    char namaP[50];
    char alamat[50];
    string penyakit;
    string jenisKelamin;
    string kodeP;
    string ruangan;
    string tindakan;
    string jenisD;
};

struct Pasien pasien[999];

void addPasien();
void lihatPasien();
void prosesPasien();
void pembayaran();
long total();

//Main Program
int main()
{
int menu;

    do
    {
        system("CLS");

        cout << "============PROGRAM RAWAT INAP============" << endl
             << "1. Masukkan data pasien baru" << endl
             << "2. Lihat data pasien" << endl
             << "3. Pilih jenis dokter dan tindakan" << endl
             << "4. Pembayaran" << endl
             << "5. Exit" << endl
             << "Pilihan Anda: ";
        cin >> menu;

        system("CLS");

        switch (menu)
        {
            case 1:
            {
                addPasien();
                break;
            }

            case 2:
            {
                lihatPasien();
                break;
            }

            case 3:
            {
                prosesPasien();
                break;
            }

            case 4:
            {
                pembayaran();
                break;
            }
            case 5:
            {
                system("EXIT");
                break;
            }

            default:
            {
                cout << "Pilihan salah";
                break;
            }
        }
    }
    while (menu != 5);

    return 0;
}

long total(int a, long b, long c, long d)
{
    return a * b + c + d;
}

void addPasien()
{
    ss.str(string());

    cout << "Masukkan nama pasien           : ";
    cin.ignore();
    cin.getline(pasien[pasienCount].namaP, 50);

    cout << "Masukkan umur pasien           : ";
    cin >> pasien[pasienCount].umur;

    cout << "Masukkan jenis kelamin (L/P)   : ";
    cin >> jk;

    if (jk == 'L' || jk == 'l')
    {
        pasien[pasienCount].jenisKelamin = "Laki-laki";
    }
        else if (jk == 'P' || jk == 'p')
        {
            pasien[pasienCount].jenisKelamin = "Perempuan";
        }

    cout << "Masukkan alamat pasien         : ";
    cin.ignore();
    cin.getline(pasien[pasienCount].alamat, 50);

    cout << endl << endl;

    cout << "Daftar diagnosa:" << endl
         << "1. Tipus" << endl
         << "2. Diare" << endl
         << "3. Muntaber" << endl
         << "4. Demam" << endl
         << "5. Lainnya" << endl
         << "Masukkan kode diagnosa pasien: ";
    cin >> pasien[pasienCount].kodeD;

    if (pasien[pasienCount].kodeD == '1')
    {
        pasien[pasienCount].penyakit = "Tipus";
        pasien[pasienCount].jenisD = "Dokter Tipus";
    }
        else if (pasien[pasienCount].kodeD == '2')
        {
            pasien[pasienCount].penyakit = "Diare";
            pasien[pasienCount].jenisD = "Dokter Diare";
        }

        else if (pasien[pasienCount].kodeD == '3')
        {
            pasien[pasienCount].penyakit = "Muntaber";
            pasien[pasienCount].jenisD = "Dokter Muntaber";
        }

        else if (pasien[pasienCount].kodeD == '4')
        {
            pasien[pasienCount].penyakit = "Demam";
            pasien[pasienCount].jenisD = "Dokter Demam";
        }

        else if (pasien[pasienCount].kodeD == '5')
        {
            pasien[pasienCount].penyakit = "Lainnya";
            pasien[pasienCount].jenisD = "Dokter Umum";
        }

    cout << endl << endl;

    cout << "Daftar kamar:" << endl
         << "1. Flamboyan   (Rp. 850.000)" << endl
         << "2. Melati      (Rp. 1.000.000)" << endl
         << "3. Anggrek     (Rp. 1.300.000)" << endl
         << "4. Mawar       (Rp. 1.800.000)" << endl
         << "5. VIP         (Rp. 2.450.000)" << endl
         << "Masukkan kode kamar pasien: ";
    cin >> pasien[pasienCount].kodeR;

    if (pasien[pasienCount].kodeR == '1')
    {
        pasien[pasienCount].ruangan = "Flamboyan";
        pasien[pasienCount].hargaR = 850000;
    }
        else if (pasien[pasienCount].kodeR == '2')
        {
            pasien[pasienCount].ruangan = "Melati";
            pasien[pasienCount].hargaR = 1000000;
        }

        else if (pasien[pasienCount].kodeR == '3')
        {
            pasien[pasienCount].ruangan = "Anggrek";
            pasien[pasienCount].hargaR = 1300000;
        }

        else if (pasien[pasienCount].kodeR == '4')
        {
            pasien[pasienCount].ruangan = "Mawar";
            pasien[pasienCount].hargaR = 1800000;
        }

        else if (pasien[pasienCount].kodeR == '5')
        {
            pasien[pasienCount].ruangan = "VIP";
            pasien[pasienCount].hargaR = 2450000;
        }

    cout << "Masukkan durasi rawat inap pasien: ";
    cin >> pasien[pasienCount].durasi;

    ss << "D" << pasien[pasienCount].kodeD << "R" << pasien[pasienCount].kodeR << "-0" << pasienCount + 1;
    ss >> pasien[pasienCount].kodeP;
    pasienCount++;

    ss.clear();
}

void lihatPasien()
{
    for (int i = 0; i < pasienCount; i++)
    {
        cout << "Kode Pasien        : " << pasien[i].kodeP << endl
             << "Nama               : " << pasien[i].namaP << endl
             << "Umur               : " << pasien[i].umur << endl
             << "Jenis Kelamin      : " << pasien[i].jenisKelamin << endl
             << "Alamat             : " << pasien[i].alamat << endl
             << "Penyakit Pasien    : " << pasien[i].penyakit << endl
             << "Kamar              : " << pasien[i].ruangan << endl
             << "Durasi Rawat Inap  : " << pasien[i].durasi << " hari" << endl;

        if (pasien[i].tindakan == "" && pasien[i].hargaO == 0)
        {
            cout << "Status Tindakan    : Belum menerima tindakan" << endl
                 << "Preskripsi Obat    : Tidak ada"  << endl;
        }
            else if (pasien[i].tindakan != "" && pasien[i].hargaO != 0)
            {
                cout << "Status Tindakan    : " << pasien[i].tindakan << endl
                     << "Preskripsi Obat    : Ada" << endl;
            }

            cout << endl << endl;
    }

    getch();
}

void prosesPasien()
{
    cout << "\n\n\n\t\t\t"
         << "Masukkan kode pasien   : ";
    cin >> login;

    for (int i = 0; i < pasienCount; i++)
    {
        if (login == pasien[i].kodeP)
        {
            system("CLS");

            cout << "Nama Pasien        : " << pasien[i].namaP << endl
                 << "Diagnosa           : " << pasien[i].penyakit << endl
                 << "Jenis Dokter       : " << pasien[i].jenisD << endl << endl;

            cout << "Tindakan Medis:" << endl
                 << "1. Istirahat total" << endl
                 << "2. Antibiotik" << endl
                 << "3. Kontrol diet" << endl
                 << "4. Checkup medis" << endl
                 << "5. Lainnya" << endl
                 << "Masukkan kode tindakan medis: ";
            cin >> pasien[i].kodeT;

            if (pasien[i].kodeT == '1')
            {
                pasien[i].tindakan = "Istirahat total";
                pasien[i].hargaT = 0;
                pasien[i].hargaO = 0;
            }
                else if (pasien[i].kodeT == '2')
                {
                    pasien[i].tindakan = "Antibiotik";
                    pasien[i].hargaT = 0;
                    pasien[i].hargaO = 0;
                }

                else if (pasien[i].kodeT == '3')
                {
                    pasien[i].tindakan = "Kontrol diet";
                    pasien[i].hargaT = 0;
                    pasien[i].hargaO = 0;
                }

                else if (pasien[i].kodeT == '4')
                {
                    pasien[i].tindakan = "Checkup medis";
                    pasien[i].hargaT = 0;
                    pasien[i].hargaO = 0;
                }

                else if (pasien[i].kodeT == '5')
                {
                    pasien[i].tindakan = "Lainnya";
                    pasien[i].hargaT = 0;
                    pasien[i].hargaO = 0;
                }

                break;
        }
            else
            {
                cout << "Data pasien tidak ditemukan" << endl;
                break;
            }
    }
}

void pembayaran()
{
    cout << "\n\n\n\t\t\t"
         << "Masukkan kode pasien   : ";
    cin >> login;

    for (int i = 0; i < pasienCount; i++)
    {
        if (login == pasien[i].kodeP)
        {
            system("CLS");

            cout << "No. Rekam Medis    : " << pasien[i].kodeP << endl
                 << "Nama Pasien        : " << pasien[i].namaP << endl
                 << "Diagnosa           : " << pasien[i].penyakit << endl << endl

                 << "================DAFTAR BIAYA================" << endl
                 << "1. Biaya kamar tipe        " << pasien[i].ruangan << "        :      "
                 << pasien[i].durasi << " x " << pasien[i].hargaR << " = "
                 << pasien[i].durasi * pasien[i].hargaR
                 << endl << endl

                 << "2. Biaya tindakan medis    " << pasien[i].tindakan << ":      "
                 << pasien[i].hargaT
                 << endl << endl

                 << "3. Biaya obat                              : " << pasien[i].hargaO
                 << endl << endl

                 << "Total: " << total(pasien[i].durasi, pasien[i].hargaR,  pasien[i].hargaT, pasien[i].hargaO)
                 << endl << endl
                 << "Tekan Enter untuk bayar";

            getch();

            break;
        }
            else
            {
                cout << "Data pasien tidak ditemukan" << endl;
                break;
            }
    }
}
