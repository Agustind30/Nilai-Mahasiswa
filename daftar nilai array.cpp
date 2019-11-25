#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
float awal ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<"                 PROGRAM DAFTAR NILAI PRAKTIKUM		      	  "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
    }
float tampilan ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<"                        DAFTAR NILAI "<<endl;
          cout<<"                    MATERI : PEMOGRAMAN C++ "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<" No.   Nama                                     Nilai               Akhir "<<endl;
          cout<<"       Mahasiswa       --------------------------------------------------------"<<endl;
          cout<<"                        Praktikum 1   Praktikum 2    Praktikum 3    Rata-Rata  "<<endl;
          cout<<" ----------------------------------------------------------------------------- "<<endl;  
    }
float terakhir ()
    {
          cout<<" ----------------------------------------------------------------------------- "<<endl;
    }


int main(int argc, char *argv[])
{
    int i;
    int jum;
    char ulang ;
    char nama_mahasiswa [50][100];
    float praktikum_1   [10];
    float praktikum_2    [10];
    float praktikum_3    [10];
    float Rata_rata  [10];
   
    do
    {
        awal ();        // digunakan untuk memanggil program awal
        cout<<" Masukkan Jumlah mahasiswa = ";cin>>jum;
        cout<<endl;
        terakhir ();     // digunakan untuk memanggil program terakhir
       
        for (i=1;i<=jum;i++)
        {
            cout<<" Mahasiswa ke - "<<i<<endl;
            cout<<" Nama Mahasiswa  = ";cin>>nama_mahasiswa [i];
            cout<<" Praktikum 1     = ";cin>>praktikum_1 [i];
            cout<<" Praktikum 2     = ";cin>>praktikum_2 [i];
            cout<<" Praktikum 3     = ";cin>>praktikum_3 [i];
            Rata_rata [i]=(praktikum_1[i]+ praktikum_2[i]+praktikum_3[i])*0.5;
            (nama_mahasiswa[i]);
            cout<<endl;
        }
        cout<<endl;
        tampilan ();   // digunakan untuk memanggil program tampilan
       
        for (i=1;i<=jum;i++)
        {
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<i;
            cout<<setiosflags (ios::left)<<" "<<setw (17)<<nama_mahasiswa[i];
            cout<<setiosflags (ios::left)<<" "<<setw (15)<<praktikum_1[i];
            cout<<setiosflags (ios::left)<<" "<<setw (15)<<praktikum_2 [i];
            cout<<setiosflags (ios::left)<<" "<<setw (15)<<praktikum_3 [i];
            cout<<setiosflags (ios::left)<<" "<<setw (15)<<Rata_rata [i];
           
            cout<<endl;
        }
        cout<<" --------------------------------------------------------------- "<<endl;
        cout<<endl;
        cout<<" Ulang Kembali ( Y/T )? ";       //pilihan perulangan
        cin>>ulang;
        system ("cls");       // digunakan untuk menghapus program yang ada di atasnya
    }
        while ((ulang=='Y')||(ulang=='y'));
     
        cout<<endl<<endl;
         
    // system("PAUSE");
    // return EXIT_SUCCESS;
}

