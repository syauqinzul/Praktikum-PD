#include <iostream>
using namespace std;

int main()
{
    int hitung, hit;
    
    // Clear screen compatible dengan semua OS
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    cout << "Berapa kali pengulangan ? ";
    cin >> hitung;
    hit = hitung;
    
    cout << "Menghitung mundur ...\n" << endl;
    
    while(hitung > 0)
    {
        cout << "Mencetak : " << hitung << endl;
        hitung--;
    }
    
    cout << endl;
    
    if(hit <= 0)
    {
        cout << "Tidak ada pengulangan..." << endl;
    }
    else
    {
        cout << "Selesai mengulang..." << endl;
        cout << "Perhitungan terakhir : " << hitung << endl;
    }
    
    // Untuk Windows agar tidak langsung close
    #ifdef _WIN32
        system("pause");
    #endif
    
    return 0;
}