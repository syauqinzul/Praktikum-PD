#include <iostream>
#include <cstring> // untuk strcpy

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    double total_pembelian, korting;
    char bonus[10];
    cout << "Total_pembelian : Rp ";
    cin >> total_pembelian;
    korting = 0;
    strcpy(bonus, "Tidak Ada");

    if (total_pembelian >= 100000)
    {
        korting = 0.05 * total_pembelian;
        strcpy(bonus, "Laptop br");
    }

    cout << "Besarnya korting : " << korting << "\n";
    cout << "Bonus : " << bonus << "\n";
    return 0;
}