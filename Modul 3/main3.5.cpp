/*
    MODUL 3.5 - Pemakaian Library stdio.h dalam mengatur tampilan
    Disesuaikan untuk Visual Studio Code
*/

#include <stdio.h>

int main()
{
    float nilai;

    printf("Masukkan nilai Anda : 85.4567 ");
    scanf("%f", &nilai);
    getchar();  // Bersihkan buffer
    
    printf("\n=== BERBAGAI FORMAT TAMPILAN ===\n\n");
    printf("Format default        : 85.456703 %f\n", nilai );
    printf("Format 5.2f           : 85.46 %5.2f\n", nilai);
    printf("Format 10.4f          : 85.4567 %10.4f\n", nilai);
    printf("Format -10.4f         : 85.457 %-10.4f (rata kiri)\n", nilai);
    printf("Format .3f            : 8.545670e+01 %.3f\n", nilai);
    printf("Format scientific     : 8.545670e+01 %e\n", nilai);
    printf("Format persen         : 85.46%.2f%%\n", nilai);
    
    // Contoh dengan nilai berbedacleara
    printf("\n=== CONTOH DENGAN NILAI 123.456789 ===\n");
    printf("%%f          : %f\n", 123.456789);
    printf("%%10.2f      : %10.2f\n", 123.456789);
    printf("%%-10.2f     : %-10.2f\n", 123.456789);
    printf("%%.3f        : %.3f\n", 123.456789);
    printf("%%e          : %e\n", 123.456789);
    
    printf("\nTekan Enter untuk keluar...");
    getchar();
    
    return 0;
}