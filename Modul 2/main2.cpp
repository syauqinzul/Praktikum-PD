#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi variabel
    int panjang = 8;
    int lebar = 5;
    int luas = panjang * lebar;
    
    string nama = "Syauqi Nuzul Abdi";
    string nim = "202512042";
    int umur = 20;
    float ipk = 3.75;
    char jenis_kelamin = 'L';
    
    cout << "=== PROGRAM PERHITUNGAN LUAS PERSEGI PANJANG ===" << endl;
    cout << "=================================================" << endl << endl;
    
    cout << "Panjang : " << panjang << " cm" << endl;
    cout << "Lebar   : " << lebar << " cm" << endl;
    cout << "Luas    : " << luas << " cm²" << endl;
    cout << endl;
    
    cout << "=== DATA DIRI ===" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "NIM           : " << nim << endl;
    cout << "Umur          : " << umur << " tahun" << endl;
    cout << "IPK           : " << ipk << endl;
    cout << "Jenis Kelamin : " << jenis_kelamin << endl;
    
    return 0;
}