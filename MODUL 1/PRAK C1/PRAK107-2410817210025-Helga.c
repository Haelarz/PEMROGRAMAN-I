#include <stdio.h>

int main(){
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
    printf("Keliling Tanah Pak Dengklek adalah 16\n");
    printf("Harga tanah Per Meter adalah 85000\n");
    printf("Jawaban :\n");

    int a = 4;
    int b = 5;
    int c = 7;
    int keliling = a + b + c;
    int total = keliling * 85000;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", total);
}