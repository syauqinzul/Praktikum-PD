#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nilai;

    cout << "Masukkan nilai Anda : 123.456789 "; 
    cin >> nilai;
    
    cout << "\n=== BERBAGAI FORMAT TAMPILAN ===\n\n";
    
    cout << "Format default         : 123.457" << nilai << endl;
    cout << "Setprecision(3)        : 123" << setprecision(3) << nilai << endl;
    cout << "Fixed precision(2)     : 123.46" << fixed << setprecision(2) << nilai << endl;
    cout << "Scientific precision(4): 1.2346e+02" << scientific << setprecision(4) << nilai << endl;
    
    cout.unsetf(ios::floatfield);
    
    cout << "\n=== FORMAT DENGAN SETW ===" << endl;
    cout << "setw(15) + fixed(2)   : |" << setw(15) << fixed << setprecision(2) << nilai << "|" << endl;
    cout << "setw(15) + left       : |" << left << setw(15) << nilai << "|" << endl;
    cout << "setw(15) + right      : |" << right << setw(15) << nilai << "|" << endl;
    
    cout << "\n=== FORMAT DENGAN SETFILL ===" << endl;
    cout << "setw(20) + setfill('*'): |" << setfill('*') << setw(20) << nilai << "|" << endl;
    cout << "setw(20) + setfill('-'): |" << setfill('-') << setw(20) << nilai << "|" << endl;
    
    cout << setfill(' ');
    
    cout << "\n=== CONTOH TABEL ===" << endl;
    cout << setfill('-') << setw(50) << "-" << setfill(' ') << endl;
    cout << "| " << left << setw(15) << "NIM" 
         << "| " << left << setw(20) << "Nama" 
         << "| " << left << setw(8) << "Nilai" << " |" << endl;
    cout << setfill('-') << setw(50) << "-" << setfill(' ') << endl;
    cout << "| " << left << setw(15) << "202312042" 
         << "| " << left << setw(20) << "Muhammad Naufal Awwaluddin" 
         << "| " << left << setw(8) << fixed << setprecision(2) << 85.5 << " |" << endl;
    cout << "| " << left << setw(15) << "202512042" 
         << "| " << left << setw(20) << "Syauqi Nuzul Abdi" 
         << "| " << left << setw(8) << 90.75 << " |" << endl;
    cout << setfill('-') << setw(50) << "-" << setfill(' ') << endl;
    
    cout << "\nTekan Enter untuk keluar...";
    cin.ignore();
    cin.get();
    
    return 0;
}