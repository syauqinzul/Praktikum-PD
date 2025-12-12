#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float celsius, fahrenheit, kelvin, reamur;
    
    cout << "PROGRAM KONVERSI SUHU CELSIUS\n";
    cout << "=============================\n\n";
    
    // Input suhu dalam Celsius
    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celsius;
    
    // Konversi suhu
    fahrenheit = (9.0/5.0) * celsius + 32;
    kelvin = 273 + celsius;
    reamur = (4.0/5.0) * celsius;
    
    // Tampilkan hasil
    cout << fixed << setprecision(2);
    cout << "\n=== HASIL KONVERSI ===\n";
    cout << "+-----------------+----------------+\n";
    cout << "| " << left << setw(15) << "Satuan" << "| " << setw(14) << "Nilai" << "|\n";
    cout << "+-----------------+----------------+\n";
    cout << "| " << left << setw(15) << "Celsius" << "| " << setw(14) << celsius << " |\n";
    cout << "| " << left << setw(15) << "Fahrenheit" << "| " << setw(14) << fahrenheit << " |\n";
    cout << "| " << left << setw(15) << "Kelvin" << "| " << setw(14) << kelvin << " |\n";
    cout << "| " << left << setw(15) << "Reamur" << "| " << setw(14) << reamur << " |\n";
    cout << "+-----------------+----------------+\n";
    
    // Tampilkan dengan format berbeda
    cout << "\n=== FORMAT LAIN ===\n";
    cout << "Celsius     : " << celsius << " °C\n";
    cout << "Fahrenheit  : " << fahrenheit << " °F\n";
    cout << "Kelvin      : " << kelvin << " K\n";
    cout << "Reamur      : " << reamur << " °R\n";
    
    return 0;
}