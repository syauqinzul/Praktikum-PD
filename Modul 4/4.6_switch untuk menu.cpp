
#include <iostream>
#include <cmath> // untuk fungsi pow()
using namespace std;

int main() {
    int pilih;
    double x, y;
    
    cout << "\nMENU KALKULATOR" << endl;
    cout << "1 = PENJUMLAHAN" << endl;
    cout << "2 = PENGURANGAN" << endl;
    cout << "3 = PERKALIAN" << endl;
    cout << "4 = PEMBAGIAN" << endl;
    cout << "5 = KUADRAT" << endl;
    cout << "6 = KELUAR" << endl;
    cout << "\nPilihan : ";
    cin >> pilih;
    
    switch (pilih) {
        case 1: // Penjumlahan
            cout << "\nPENJUMLAHAN" << endl;
            cout << "z = x + y" << endl;
            cout << "x = "; cin >> x;
            cout << "y = "; cin >> y;
            cout << "z = " << x + y;
            break;
            
        case 2: // Pengurangan
            cout << "\nPENGURANGAN" << endl;
            cout << "z = x - y" << endl;
            cout << "x = "; cin >> x;
            cout << "y = "; cin >> y;
            cout << "z = " << x - y;
            break;
            
        case 3: // Perkalian
            cout << "\nPERKALIAN" << endl;
            cout << "z = x * y" << endl;
            cout << "x = "; cin >> x;
            cout << "y = "; cin >> y;
            cout << "z = " << x * y;
            break;
            
        case 4: // Pembagian
            cout << "\nPEMBAGIAN" << endl;
            cout << "z = x / y" << endl;
            cout << "x = "; cin >> x;
            cout << "y = "; cin >> y;
            if (y != 0) {
                cout << "z = " << x / y;
            } else {
                cout << "Error: Pembagian dengan nol!";
            }
            break;
            
        case 5: // Kuadrat
            cout << "\nKUADRAT" << endl;
            cout << "x² = x * x" << endl;
            cout << "x = "; cin >> x;
            cout << "x² = " << pow(x, 2);
            break;
            
        case 6: // Keluar
            cout << "KELUAR...";
            break;
            
        default:
            cout << "Nomor yang dimasukkan salah!";
    }
    
    return 0;
}

