/* Program menghitung bantuan korban gempa */
#include <iostream>
using namespace std;

int main()
{
    int balita, non_balita, total_jiwa;
    const int BIAYA_BALITA = 7000;
    const int BIAYA_NON_BALITA = 12000;
    const int HARI_PERBULAN = 30;
    
    cout << "PROGRAM PERHITUNGAN BANTUAN KORBAN GEMPA" << endl;
    cout << "========================================" << endl;
    
    cout << "Masukkan jumlah anggota keluarga:" << endl;
    cout << "1. Di bawah balita (0-5 tahun): ";
    cin >> balita;
    
    cout << "2. Di atas balita (>5 tahun): ";
    cin >> non_balita;
    
    // Validasi total jiwa = 5
    total_jiwa = balita + non_balita;
    
    if (total_jiwa != 5)
    {
        cout << "ERROR: Total jiwa harus 5 orang!" << endl;
        cout << "Total jiwa yang dimasukkan: " << total_jiwa << " orang" << endl;
        return 1;
    }
    
    // Hitung biaya
    int biaya_perhari = (balita * BIAYA_BALITA) + (non_balita * BIAYA_NON_BALITA);
    int biaya_perbulan = biaya_perhari * HARI_PERBULAN;
    
    // Tampilkan hasil
    cout << "\nRINCIAN PERHITUNGAN:" << endl;
    cout << "=====================" << endl;
    cout << "Jumlah balita: " << balita << " orang" << endl;
    cout << "Jumlah di atas balita: " << non_balita << " orang" << endl;
    cout << "Total jiwa: " << total_jiwa << " orang" << endl;
    cout << "\nBiaya per hari:" << endl;
    cout << "- Balita: " << balita << " × Rp " << BIAYA_BALITA 
         << " = Rp " << balita * BIAYA_BALITA << endl;
    cout << "- Non-balita: " << non_balita << " × Rp " << BIAYA_NON_BALITA 
         << " = Rp " << non_balita * BIAYA_NON_BALITA << endl;
    cout << "Total per hari: Rp " << biaya_perhari << endl;
    cout << "\nBiaya untuk " << HARI_PERBULAN << " hari: " << endl;
    cout << "Rp " << biaya_perhari << " × " << HARI_PERBULAN 
         << " = Rp " << biaya_perbulan << endl;
    cout << "\nTOTAL BANTUAN: Rp " << biaya_perbulan << endl;
    
    return 0;
}