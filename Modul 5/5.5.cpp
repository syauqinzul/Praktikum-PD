#include <iostream>
using namespace std;

int main()
{
    int jum_data = 0;
    int nomor = 1;
    float total_nilai = 0;
    float nilai, rata_rata;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    cout << "Program Menghitung Rata-rata Nilai" << endl;
    cout << "==================================" << endl;
    
    cout << "\nJumlah data : ";
    cin >> jum_data;
    
    while(nomor <= jum_data)
    {
        cout << "\nData ke-" << nomor << " : ";
        cin >> nilai;
        
        if(nilai > 100)
        {
            cout << "Data terlalu besar (maksimal 100)" << endl;
            continue;
        }
        
        total_nilai = total_nilai + nilai;
        nomor++;
    }
    
    rata_rata = total_nilai / jum_data;
    
    cout << "\n==================================" << endl;
    cout << "Jumlah data   = " << jum_data << endl;
    cout << "Jumlah nilai  = " << total_nilai << endl;
    cout << "Rata-rata     = " << rata_rata << endl;
    
    #ifdef _WIN32
        cout << "\n";
        system("pause");
    #endif
    
    return 0;
}