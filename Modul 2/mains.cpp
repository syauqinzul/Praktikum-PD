#include <iostream>
using namespace std;

int main() {
    cout << "=== PROGRAM MENAMPILKAN UKURAN TIPE DATA ===" << endl;
    cout << "============================================" << endl << endl;
    
    cout << "Ukuran char        : " << sizeof(char) << " byte" << endl;
    cout << "Ukuran int         : " << sizeof(int) << " byte" << endl;
    cout << "Ukuran short int   : " << sizeof(short int) << " byte" << endl;
    cout << "Ukuran long int    : " << sizeof(long int) << " byte" << endl;
    cout << "Ukuran float       : " << sizeof(float) << " byte" << endl;
    cout << "Ukuran double      : " << sizeof(double) << " byte" << endl;
    cout << "Ukuran bool        : " << sizeof(bool) << " byte" << endl;
    
    return 0;
}
