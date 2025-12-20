// File: Modul4_2_ifelse.cpp
#include <iostream>
using namespace std;

int main() {
    float nilai;
    cout << "Masukan nilai yang didapat : ";
    cin >> nilai;
    
    if (nilai > 65) {
        cout << "\nLULUS !!!\n";
    } else {
        cout << "\nTIDAK LULUS !!!\n";
    }
    
    return 0;
}