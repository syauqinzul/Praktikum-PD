#include <iostream>
#include <cstdlib>  // Untuk exit()
using namespace std;

void luasSegitiga()
{
    float alas, tinggi, luas;
    
    cout << "\n=== LUAS SEGITIGA ===" << endl;
    cout << "Masukkan alas   : ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    
    luas = 0.5 * alas * tinggi;
    cout << "Luas Segitiga = " << luas << endl;
}

void kelilingSegitiga()
{
    float sisia, sisib, sisic, keliling;
    
    cout << "\n=== KELILING SEGITIGA ===" << endl;
    cout << "Panjang sisi a : ";
    cin >> sisia;
    cout << "Panjang sisi b : ";
    cin >> sisib;
    cout << "Panjang sisi c : ";
    cin >> sisic;
    
    keliling = sisia + sisib + sisic;
    cout << "Keliling Segitiga = " << keliling << endl;
}

int main()
{
    int pilih;
    char ulang;
    
    do
    {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        
        cout << "=== MENU HITUNG ===" << endl;
        cout << "1. Luas Segitiga" << endl;
        cout << "2. Keliling Segitiga" << endl;
        cout << "3. Keluar" << endl;
        cout << "===================" << endl;
        cout << "Pilihan Anda (1-3): ";
        cin >> pilih;
        
        switch(pilih)
        {
            case 1:
                luasSegitiga();
                break;
                
            case 2:
                kelilingSegitiga();
                break;
                
            case 3:
                cout << "\nTerima kasih!" << endl;
                exit(0);
                break;
                
            default:
                cout << "\nPilihan tidak valid!" << endl;
        }
        
        if(pilih != 3)
        {
            cout << "\nKembali ke menu? (y/n): ";
            cin >> ulang;
        }
        
    } while(ulang == 'y' || ulang == 'Y');
    
    #ifdef _WIN32
        cout << "\n";
        system("pause");
    #endif
    
    return 0;
}