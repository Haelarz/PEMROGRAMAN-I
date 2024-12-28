#include <stdio.h>

int main(){
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = 5 Putaran\n");
    printf("Jarak tempuh Pak Dengklek = 14 Kilometer\n");
    printf("\n");
    printf("Jawaban :\n");

    float putaran = 5;
    float jarak = 14;
    float keliling = jarak / putaran;
    float pi = 3.14;
    float r = keliling / (2 * pi);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
}