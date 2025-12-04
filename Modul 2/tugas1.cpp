#include <iostream>
using namespace std;

// Konstanta
#define PI 3.14159

int main() {
    cout << "=== PROGRAM MENGHITUNG VOLUME SILINDER ===" << endl;
    cout << "==========================================" << endl << endl;
    
    // Deklarasi variabel
    float jari_jari, tinggi, volume;
    
    // Input data (untuk praktikum, kita beri nilai tetap)
    jari_jari = 7.0;    // dalam cm
    tinggi = 10.0;      // dalam cm
    
    // Menghitung volume silinder
    // Rumus: V = π × r² × t
    volume = PI * jari_jari * jari_jari * tinggi;
    
    // Menampilkan hasil
    cout << "DATA SILINDER:" << endl;
    cout << "Jari-jari (r) : " << jari_jari << " cm" << endl;
    cout << "Tinggi (t)    : " << tinggi << " cm" << endl;
    cout << "PI (π)        : " << PI << endl;
    cout << endl;
    cout << "HASIL PERHITUNGAN:" << endl;
    cout << "Volume silinder = π × r² × t" << endl;
    cout << "                = " << PI << " × " << jari_jari << "² × " << tinggi << endl;
    cout << "                = " << PI << " × " << (jari_jari * jari_jari) << " × " << tinggi << endl;
    cout << "                = " << volume << " cm³" << endl;
    
    return 0;
}