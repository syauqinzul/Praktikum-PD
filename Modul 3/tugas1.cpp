#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    float plug;
    
    // Input data
    cout << "MASUKKAN DATA ANDA\n";
    cout << "==================\n";
    
    cout << "Nama : SYAUQI NUZUL ABDI";
    getline(cin, nama);
    
    cout << "NIM  : 202512042";
    getline(cin, nim);
    
    cout << "PLUG  : 09";
    cin >> plug;
    
    // Tampilkan data
    cout << "\n\nINILAH DATA ANDA\n";
    cout << "================\n";
    cout << left << setw(10) << "Nama" << ": " << nama << endl;
    cout << left << setw(10) << "NIM" << ": " << nim << endl;
    cout << left << setw(10) << "PLUG" << ": " << fixed << setprecision(2) << plug << endl;
    
    // Tampilkan dalam bentuk tabel
    cout << "\n\nDALAM BENTUK TABEL\n";
    cout << "==================\n";
    
    // Header tabel
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    
    cout << "| " << left << setw(15) << "NIM" 
         << "| " << left << setw(20) << "Nama" 
         << "| " << left << setw(8) << "PLUG" << " |" << endl;
    
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    
    // Data tabel
    cout << "| " << left << setw(15) << nim 
         << "| " << left << setw(20) << nama 
         << "| " << left << setw(8) << fixed << setprecision(2) << plug << " |" << endl;
    
    cout << setfill('-') << setw(50) << "-" << endl;
    
    return 0;
}