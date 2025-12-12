#include <iostream>
using namespace std;

// Function prototypes
void sapa();
int tambah(int a, int b);

int main() {
    sapa();
    int hasil = tambah(5, 3);
    cout << "Hasil: " << hasil;
    return 0;
}

void sapa() {
    cout << "Halo!" << endl;
}

int tambah(int a, int b) {
    return a + b;
}