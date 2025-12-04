#include <iostream>
using namespace std;

int main() {
    cout << "=== PROGRAM CONTOH EKSPRESI ===" << endl;
    cout << "================================" << endl << endl;
    
    int a = 0, b = 0, x = 0, y = 35;
    
    cout << "Nilai awal:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl << endl;
    
    // Ekspresi bertingkat
    a = 9;
    b = 7;
    y = x = a + b;
    
    cout << "Setelah eksekusi: y = x = a + b" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl << endl;
    
    // Ekspresi kompleks
    int p = 10, q = 3;
    float hasil;
    
    hasil = (p + q) * 2.5 - (q / 2.0);
    
    cout << "Ekspresi: hasil = (p + q) * 2.5 - (q / 2.0)" << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "hasil = " << hasil << endl;
    
    return 0;
}