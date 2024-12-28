#include <stdio.h>

int main(){
    printf("Harga Sepatu A adalah 400000\n");
    printf("Harga sepatu B adalah 350000\n");

    int a = 400000;
    int disa = a * 87/100;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", disa);

    int b = 350000;
    int disb = b * 79/100;
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", disb);
}