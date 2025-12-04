#include <iostream>
using namespace std;

int main() {
    cout << "=== PROGRAM OPERATOR DECREMENT (--) ===" << endl;
    cout << "========================================" << endl << endl;
    
    // Operator Decrement
    int a = 10;
    int b = 10;
    int hasil_pre, hasil_post;
    
    cout << "=== OPERATOR DECREMENT ===" << endl;
    cout << "Nilai awal a = " << a << ", b = " << b << endl << endl;
    
    // Pre-decrement: --a
    cout << "1. PRE-DECREMENT (--a):" << endl;
    cout << "   Sebelum: a = " << a << endl;
    hasil_pre = --a;  // a dikurangi 1 dulu, baru hasil_pre = a
    cout << "   Setelah --a:" << endl;
    cout << "   hasil_pre = " << hasil_pre << ", a = " << a << endl << endl;
    
    // Reset nilai untuk contoh post-decrement
    a = 10; // reset ke nilai awal
    
    // Post-decrement: a--
    cout << "2. POST-DECREMENT (a--):" << endl;
    cout << "   Sebelum: a = " << a << endl;
    hasil_post = a--;  // hasil_post = a dulu, baru a dikurangi 1
    cout << "   Setelah a--:" << endl;
    cout << "   hasil_post = " << hasil_post << ", a = " << a << endl << endl;
    
    // Contoh dalam loop
    cout << "3. CONTOH DALAM LOOP:" << endl;
    cout << "   Menggunakan for loop dengan decrement:" << endl;
    cout << "   ";
    for(int i = 5; i > 0; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    // Perbandingan pre vs post dalam ekspresi
    cout << "\n4. PERBANDINGAN DALAM EKSPRESI:" << endl;
    int x = 5, y = 5;
    int result1, result2;
    
    result1 = --x * 2;  // Pre-decrement
    result2 = y-- * 2;  // Post-decrement
    
    cout << "   Pre-decrement (--x * 2):" << endl;
    cout << "   x awal = 5, hasil = " << result1 << ", x akhir = " << x << endl;
    
    cout << "   Post-decrement (y-- * 2):" << endl;
    cout << "   y awal = 5, hasil = " << result2 << ", y akhir = " << y << endl;
    
    return 0;
}