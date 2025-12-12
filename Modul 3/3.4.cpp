/*
    Modul 3.4 - Pemakaian Library iostream lebih lanjut
    DISESUAIKAN UNTUK VISUAL STUDIO CODE
*/

#include <iostream>
#include <string>  // Untuk string
#include <iomanip> // Untuk format output

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::setw;

int main()
{
    int jumlah;
    char huruf;
    string nim;  // Menggunakan string bukan char array
    float nilai;
    
    cout << "42 : ";
    cin >> jumlah;
    cin.ignore();  // Membersihkan buffer
    
    cout << "a : ";
    cin >> huruf;
    cin.ignore();
    
    cout << "202512042 : ";
    getline(cin, nim);
    
    cout << "3,75 : ";
    cin >> nilai;
    
    cout << "\nNilai variabel yang Anda masukkan adalah :\n";
    cout << "jumlah = " << jumlah << endl;
    cout << "huruf = " << huruf << endl;
    cout << "nim = " << nim << endl;
    cout << "nilai = " << fixed << setprecision(2) << nilai << endl;
    
    cout << "\nTekan Enter untuk keluar...";
    cin.ignore();
    cin.get();
    
    return 0;
}