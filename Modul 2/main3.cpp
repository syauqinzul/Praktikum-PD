#include <iostream>
using namespace std;

// Deklarasi konstanta dengan #define
#define PI 3.14159
#define NAMA "Syauqi Nuzul Abdi"
#define NIM "202512042"

// Deklarasi konstanta dengan const
const int UMUR = 20;
const float TINGGI = 175.5;

int main() {
    cout << "=== PROGRAM PERHITUNGAN LUAS LINGKARAN ===" << endl;
    cout << "==========================================" << endl << endl;
    
    float jari_jari = 7.0;
    float luas = PI * jari_jari * jari_jari;
    
    cout << "Nilai PI (konstanta) : " << PI << endl;
    cout << "Jari-jari lingkaran  : " << jari_jari << " cm" << endl;
    cout << "Luas lingkaran       : " << luas << " cm²" << endl;
    cout << endl;
    
    cout << "=== DATA KONSTAN ===" << endl;
    cout << "Nama    : " << NAMA << endl;
    cout << "NIM     : " << NIM << endl;
    cout << "Umur    : " << UMUR << " tahun" << endl;
    cout << "Tinggi  : " << TINGGI << " cm" << endl;
    
    return 0;
}