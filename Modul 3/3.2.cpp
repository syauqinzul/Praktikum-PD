/*
    Modul 3.2 - Pemakaian Library iostream
    DISESUAIKAN UNTUK VISUAL STUDIO CODE
*/

#include <iostream>
#include <string>  // Untuk getline()

using std::cout;
using std::cin;
using std::string;

int main()
{
    char nama[20];
    
    cout << "Masukkan nama Anda : Syauqi Nuzul Abdi ";
    cin.getline(nama, sizeof(nama));
    cout << "Hello, Nama Anda adalah " << nama << "\n";
    
    // Untuk mencegah console langsung tertutup
    cout << "\nTekan Enter untuk keluar...";
    cin.get();
    
    return 0;
}