#include <stdio.h>

int main(){
    printf("Variabel a bernilai 9\n");
    printf("Variabel b bernilai 6\n");
    printf("Variabel x bernilai 10\n");
    printf("Variabel y bernilai 7\n");

    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;
    float hasil = (a + b) * x / y;
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);
}