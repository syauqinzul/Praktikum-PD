#include <iostream>
using namespace std;

int main()
{
    int hitung, hit;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    cout << "Berapa kali pengulangan ? ";
    cin >> hitung;
    hit = hitung;
    
    cout << "Menghitung mundur ...\n" << endl;
    
    for(; hitung>0; hitung--)
    {
        cout << "Mencetak : " << hitung << endl;
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
    
    #ifdef _WIN32
        system("pause");
    #endif
    
    return 0;
}