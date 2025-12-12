#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int nim;
    
public:
    void setData(string n, int id) {
        nama = n;
        nim = id;
    }
    
    void display() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
    }
};

int main() {
    Mahasiswa mhs1;
    mhs1.setData("Andi", 202512001);
    mhs1.display();
    return 0;
}