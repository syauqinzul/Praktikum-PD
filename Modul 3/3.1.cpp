/* 
    Modul 3.1 - Pemakaian Library stdio.h
    DISESUAIKAN UNTUK VISUAL STUDIO CODE
    Catatan: gets() diganti dengan fgets() untuk keamanan
*/

#include <stdio.h>
#include <string.h>  // Untuk strcspn()

int main()
{
    char nama[20];
    
    printf("Masukkan nama Anda : Syauqi Nuzul Abdi ");
    fgets(nama, sizeof(nama), stdin);
    
    // Hapus newline character
    nama[strcspn(nama, "\n")] = 0;
    
    printf("Hello, Nama Anda adalah %s\n", nama);
    
    // Untuk mencegah console langsung tertutup di VS Code
    printf("\nTekan Enter untuk keluar...");
    getchar();
    
    return 0;
}