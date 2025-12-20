// File: Modul4_1_if.cpp
#include <iostream>
using namespace std;

int main() {
    double total_pembelian, korting;
    cout << "Total pembelian : Rp ";
    cin >> total_pembelian;
    korting = 0;
    
    if (total_pembelian >= 50000) {
        korting = 0.05 * total_pembelian;
    }
    
    cout << "Besarnya korting : Rp " << korting << endl;
    return 0;
}