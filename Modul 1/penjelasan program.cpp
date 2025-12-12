// 1. PREPROCESSOR DIRECTIVES
// #include <iostream>   // Input/output standar
// #include <cmath>      // Fungsi matematika
// #include <string>     // Manipulasi string
// #include <vector>     // Array dinamis
#include <iostream>    // Header file untuk input/output

// 2. NAMESPACE
// using namespace std;  // Menggunakan semua simbol dalam std
// // ATAU
// using std::cout;      // Hanya menggunakan cout dari std
// using std::cin;       // Hanya menggunakan cin dari std
using namespace std;   // Menggunakan namespace standar

// 3. DEKLARASI FUNGSI (PROTOTYPE)
void tampilkanPesan(); // Deklarasi fungsi

// 4. DEKLARASI KONSTANTA GLOBAL
const float PI = 3.14159;

// 5. FUNGSI UTAMA (MAIN)
int main() {
    // 5a. DEKLARASI VARIABEL LOKAL
    int angka = 10;
    
    // 5b. STATEMENT
//     {
//     int x = 5;
//     int y = 10;
//     int hasil = x + y;
// }
    cout << "Program pertama" << endl;
    tampilkanPesan();
    
    // 5c. RETURN STATEMENT
    return 0;
}

// 6. DEFINISI FUNGSI LAIN
void tampilkanPesan() {
    cout << "Ini dari fungsi lain" << endl;
}