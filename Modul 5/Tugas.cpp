#include <iostream>
#include <iomanip>
using namespace std;

void tugasBilanganGanjil()
{
    int start = 10, end = 150;
    int jumlah = 0;
    
    cout << "\n=== BILANGAN GANJIL (10-150) ===" << endl;
    cout << "Bilangan ganjil antara " << start << " dan " << end << ":\n" << endl;
    
    // Menggunakan for
    cout << "1. Menggunakan FOR:" << endl;
    cout << "Bilangan: ";
    for(int i = start; i <= end; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
            jumlah++;
        }
    }
    cout << "\nJumlah: " << jumlah << " bilangan" << endl;
    
    // Menggunakan while
    cout << "\n2. Menggunakan WHILE:" << endl;
    int i = start;
    jumlah = 0;
    cout << "Bilangan: ";
    while(i <= end)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
            jumlah++;
        }
        i++;
    }
    cout << "\nJumlah: " << jumlah << " bilangan" << endl;
    
    // Menggunakan do-while
    cout << "\n3. Menggunakan DO-WHILE:" << endl;
    i = start;
    jumlah = 0;
    cout << "Bilangan: ";
    do
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
            jumlah++;
        }
        i++;
    } while(i <= end);
    cout << "\nJumlah: " << jumlah << " bilangan" << endl;
}

int main()
{
    tugasBilanganGanjil();
    return 0;
}