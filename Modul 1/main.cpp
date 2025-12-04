
#include <string>
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama, nim, plug, alamat, email, no_hp;
    char jenis_kelamin;
    
    // Input data
    cout << "Masukkan Nama \t\t: ";
    getline(cin, nama);
    
    cout << "Masukkan NIM \t\t: ";
    getline(cin, nim);
    
    cout << "Masukkan Plug \t\t: ";
    getline(cin, plug);
    
    cout << "Masukkan Jenis Kelamin (L/P) : ";
    cin >> jenis_kelamin;
    cin.ignore(); // Membersihkan newline character
    
    cout << "Masukkan Alamat \t: ";
    getline(cin, alamat);
    
    cout << "Masukkan E-mail \t: ";
    getline(cin, email);
    
    cout << "Masukkan No. HP \t: ";
    getline(cin, no_hp);
    
    // Output data
    cout << "\n\n=== DATA PRIBADI ===" << endl;
    cout << "Nama \t\t: " << nama << endl;
    cout << "NIM \t\t: " << nim << endl;
    cout << "Plug \t\t: " << plug << endl;
    cout << "Jenis Kelamin \t: " << jenis_kelamin << endl;
    cout << "Alamat \t\t: " << alamat << endl;
    cout << "E-mail \t\t: " << email << endl;
    cout << "No. HP \t\t: " << no_hp << endl;
    
    return 0;
}