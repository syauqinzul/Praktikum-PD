#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, n;
    float x, sx, rx;
    bool input_valid = true;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    cout << "Program Input Data (Tanpa Goto)" << endl;
    cout << "================================" << endl;
    
    cout << "Jumlah data : ";
    cin >> n;
    
    cout << "\n================================" << endl;
    cout << "No\tData" << endl;
    cout << "================================" << endl;
    
    sx = 0;
    
    for(i = 1; i <= n; i++)
    {
        cout << i << "\tInput data : ";
        cin >> x;
        
        if(x < 0)
        {
            cout << "\nInput tidak boleh negatif!" << endl;
            input_valid = false;
            break;
        }
        
        cout << "\t\t" << x << endl;
        sx += x;
    }
    
    cout << "================================" << endl;
    
    if(input_valid && i > 1)
    {
        cout << "Total data  : " << sx << endl;
        cout << "================================" << endl;
        rx = sx / (i - 1);
        cout << "Rata-rata   : " << rx << endl;
    }
    else
    {
        cout << "Perhitungan dibatalkan!" << endl;
    }
    
    cout << "================================" << endl;
    
    #ifdef _WIN32
        cout << "\n";
        system("pause");
    #endif
    
    return 0;
}