/* Program menentukan bulan berdasarkan jumlah hari */
#include <iostream>
using namespace std;

int main()
{
    int hari;
    
    cout << "PROGRAM PENENTUAN BULAN MASEHI" << endl;
    cout << "===============================" << endl;
    cout << "Masukkan jumlah hari (28/29/30/31): ";
    cin >> hari;
    
    switch (hari)
    {
        case 28:
            cout << "Bulan dengan 28 hari: Februari (tahun biasa)" << endl;
            break;
        case 29:
            cout << "Bulan dengan 29 hari: Februari (tahun kabisat)" << endl;
            break;
        case 30:
            cout << "Bulan dengan 30 hari:" << endl;
            cout << "- April" << endl;
            cout << "- Juni" << endl;
            cout << "- September" << endl;
            cout << "- November" << endl;
            break;
        case 31:
            cout << "Bulan dengan 31 hari:" << endl;
            cout << "- Januari" << endl;
            cout << "- Maret" << endl;
            cout << "- Mei" << endl;
            cout << "- Juli" << endl;
            cout << "- Agustus" << endl;
            cout << "- Oktober" << endl;
            cout << "- Desember" << endl;
            break;
        default:
            cout << "Input tidak valid! Masukkan 28, 29, 30, atau 31." << endl;
    }
    
    return 0;
}