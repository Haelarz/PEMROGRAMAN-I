#include <stdio.h>
#include <math.h>

int main(){
    printf("Diketahui :\n");
    printf("Alas = 5cm\n");
    printf("Tinggi = 12cm\n");
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = 12cm\n");

    int a = 12;
    int c = 5;
    int b = sqrt((a * a) + (c * c));
    printf("Sisi B = %dcm\n", b);
    printf("Sisi C = 5cm\n");

    int keliling = a + b + c;
    int luas = 0.5 * c * a;
    printf("Keliling = %dcm\n", keliling);
    printf("Luas = %dcm\n", luas);
}