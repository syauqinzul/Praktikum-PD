#include <iostream>
using namespace std;

int main() {
    cout << "=== PROGRAM OPERATOR MATEMATIKA ===" << endl;
    cout << "===================================" << endl << endl;
    
    // Deklarasi variabel
    int a = 9, b = 4;
    int hasil_tambah, hasil_kurang, hasil_kali, hasil_bagi_int, hasil_mod;
    float hasil_bagi_float;
    
    // Operasi matematika
    hasil_tambah = a + b;
    hasil_kurang = a - b;
    hasil_kali = a * b;
    hasil_bagi_int = a / b;          // Pembagian integer
    hasil_bagi_float = (float)a / b; // Pembagian float
    hasil_mod = a % b;               // Modulus
    
    cout << "a = " << a << ", b = " << b << endl << endl;
    
    cout << "Hasil a + b  = " << hasil_tambah << endl;
    cout << "Hasil a - b  = " << hasil_kurang << endl;
    cout << "Hasil a × b  = " << hasil_kali << endl;
    cout << "Hasil a / b (integer) = " << hasil_bagi_int << endl;
    cout << "Hasil a / b (float)   = " << hasil_bagi_float << endl;
    cout << "Hasil a % b  = " << hasil_mod << endl;
    
    return 0;
}