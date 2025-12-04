#include <iostream>
using namespace std;

int main() {
    cout << "=== PROGRAM OPERATOR MATEMATIKA (MODIFIKASI) ===" << endl;
    cout << "================================================" << endl << endl;
    
    // Deklarasi variabel seperti yang diminta
    int x, y, z, m, n;
    float m2;
    
    // Operasi matematika
    x = 9 + 4;        // menghitung 9+4
    y = 9 - 4;        // menghitung 9-4
    z = 9 * 4;        // menghitung 9*4
    m = 9 / 4;        // menghitung 9/4 (integer)
    m2 = 9.0 / 4.0;   // menghitung 9/4 (float)
    n = 9 % 4;        // menghitung 9%4
    
    // clrscr() tidak digunakan karena spesifik untuk Turbo C++
    // Di VS Code, kita bisa clear screen dengan system("cls")
    // Tapi lebih baik tidak digunakan untuk portabilitas
    
    // Output hasil
    cout << "Nilai dari 9 + 4 = " << x << endl;
    cout << "Nilai dari 9 - 4 = " << y << endl;
    cout << "Nilai dari 9 * 4 = " << z << endl;
    cout << "Nilai dari 9 / 4 (integer) = " << m << endl;
    cout << "Nilai dari 9.0 / 4.0 (float) = " << m2 << endl;
    cout << "Nilai dari 9 mod 4 = " << n << endl;
    
    cout << endl;
    cout << "=== PERBANDINGAN HASIL ===" << endl;
    cout << "9 / 4 (integer)  = " << m << endl;
    cout << "9.0 / 4.0 (float)= " << m2 << endl;
    
    if (m == m2) {
        cout << "Kesimpulan: HASIL SAMA" << endl;
    } else {
        cout << "Kesimpulan: HASIL BERBEDA" << endl;
        cout << "Penjelasan: Pembagian integer membulatkan ke bawah" << endl;
    }
    
    return 0;
}