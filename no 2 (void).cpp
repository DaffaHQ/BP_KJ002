#include<iostream>
#include<iomanip>
using namespace std;

void garis(); //prototipe fungsi garis()

int main()
{
          char kd_matkul[15], nama_matkul[15];

          cout<<"Masukan data anda"<<endl;
          cout<<"Kode Mata Kuliah : "; cin.getline(kd_matkul, sizeof(kd_matkul));
          cout<<"Nama Mata Kuliah : "; cin.getline(nama_matkul,15);
        cout << "============================" << endl;
         cout << "Data yang tersimpan" << endl;
          cout<<"Kode Mata Kuliah : "<<kd_matkul<<endl;   
          cout<<"Nama Mata Kuliah : "<<nama_matkul<<endl;
}