#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel dengan berbagai tipe data
    int umur = 20;
    float tinggi = 175.5;
    char jenisKelamin = 'L';
    string nama = "Syauqi";
    bool mahasiswa = true;
    
    // Operasi aritmatika
    int a = 15, b = 4;
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = a / (float)b;
    int modulus = a % b;
    
    // Output
    cout << "=== Tipe Data ===" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "Tinggi: " << tinggi << " cm" << endl;
    cout << "Jenis Kelamin: " << jenisKelamin << endl;
    cout << "Status Mahasiswa: " << (mahasiswa ? "Ya" : "Tidak") << endl;
    
    cout << "\n=== Operasi Aritmatika ===" << endl;
    cout << a << " + " << b << " = " << tambah << endl;
    cout << a << " - " << b << " = " << kurang << endl;
    cout << a << " * " << b << " = " << kali << endl;
    cout << a << " / " << b << " = " << bagi << endl;
    cout << a << " % " << b << " = " << modulus << endl;
    
    // Operasi relasional
    cout << "\n=== Operasi Relasional ===" << endl;
    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    
    return 0;
}