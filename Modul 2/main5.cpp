#include <iostream>
using namespace std;

int main() {
    cout << "=== PROGRAM OPERATOR UNARY (INCREMENT/DECREMENT) ===" << endl;
    cout << "====================================================" << endl << endl;
    
    // Operator Increment (++)
    int x = 5;
    int y = 5;
    int hasil_pre, hasil_post;
    
    cout << "=== OPERATOR INCREMENT ===" << endl;
    cout << "Nilai awal x = " << x << ", y = " << y << endl << endl;
    
    // Pre-increment: ++x
    hasil_pre = ++x;
    cout << "Setelah ++x:" << endl;
    cout << "hasil_pre = " << hasil_pre << ", x = " << x << endl;
    
    // Post-increment: y++
    hasil_post = y++;
    cout << "\nSetelah y++:" << endl;
    cout << "hasil_post = " << hasil_post << ", y = " << y << endl;
    
    // Operator Decrement (--)
    int a = 8;
    int b = 8;
    
    cout << "\n=== OPERATOR DECREMENT ===" << endl;
    cout << "Nilai awal a = " << a << ", b = " << b << endl << endl;
    
    // Pre-decrement: --a
    cout << "Setelah --a: a = " << --a << endl;
    
    // Post-decrement: b--
    cout << "Setelah b--: b = " << b-- << " (setelah statement, b = " << b << ")" << endl;
    
    return 0;
}