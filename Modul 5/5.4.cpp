#include <iostream>
#include <iomanip>
#define MAKS 8

using namespace std;

int main()
{
    int baris, kolom, hasil_kali;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    cout << "Tabel Perkalian 8x8:\n" << endl;
    
    for(baris = 1; baris <= MAKS; baris++)
    {
        for(kolom = 1; kolom <= MAKS; kolom++)
        {
            hasil_kali = baris * kolom;
            cout << setw(4) << hasil_kali;
        }
        cout << endl;
    }
    
    #ifdef _WIN32
        cout << "\n";
        system("pause");
    #endif
    
    return 0;
}