#include <iostream>
using namespace std;

int main()
{
    int nilai;
    char skor;
    
    cout << "Masukkan nilai = ";
    cin >> nilai;
    
    if ((nilai <= 100) && (nilai >= 85))
        skor = 'A';
    else if ((nilai >= 79) && (nilai <= 84))
        skor = 'B';
    else if ((nilai >= 50) && (nilai <= 69))
        skor = 'C';
    else if ((nilai >= 30) && (nilai <= 49))
        skor = 'D';
    else
        skor = 'E';
    
    cout << "Nilai Huruf = " << skor << endl;
    
    return 0;
}