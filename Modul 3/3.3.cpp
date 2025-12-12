/*
    Modul 3.3 - Pemakaian Library stdio.h lebih lanjut
    DISESUAIKAN UNTUK VISUAL STUDIO CODE
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int jumlah;
    char huruf, nim[10];
    float nilai;

    printf("Masukkan sebuah karakter : A");
    scanf("%c", &huruf);
    getchar();  // Membersihkan buffer
    
    printf("Masukkan sebuah bilangan bulat : 09");
    scanf("%d", &jumlah);
    getchar();  // Membersihkan buffer
    
    printf("Masukkan nim Anda : 202512042");
    scanf("%9s", nim);  // Batasi input untuk mencegah overflow
    getchar();  // Membersihkan buffer
    
    printf("Masukkan sebuah bilangan pecahan : 95.5");
    scanf("%f", &nilai);
    
    printf("\nNilai variabel yang Anda masukkan adalah : \n");
    printf("jumlah = %d\n", jumlah);
    printf("huruf = %c\n", huruf);
    printf("nim = %s\n", nim);
    printf("nilai = %4.2f\n", nilai);
    
    printf("\nTekan Enter untuk keluar...");
    getchar();
    getchar();  // Dua kali karena masih ada newline di buffer
    
    return 0;
}