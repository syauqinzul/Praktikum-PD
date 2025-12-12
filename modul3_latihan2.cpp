#include <stdio.h>

int main() {
    int T;
    
    printf("Contoh IF tiga kasus \n");
    printf("Temperatur (der. C) = ");
    scanf("%d", &T);
    
    if (T < 0) {
        printf("Wujud air beku %d \n", T);
    } else if ((0 <= T) && (T <= 100)) {
        printf("Wujud air cair %d \n", T);
    } else if (T > 100) {
        printf("Wujud air uap/gas %d \n", T);
    }
    
    return 0;
}