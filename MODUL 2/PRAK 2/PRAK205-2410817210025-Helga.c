#include <stdio.h>
#include <math.h>

int main(){
    float a, b , c, l, k;
    scanf("%f %f", &a, &b);

    c = sqrt(b * b - a * a);
    k = a + b + c;
    l = 0.5 * c * a;

    printf("Alas = %.0f cm", c);
    printf("\nTinggi = %.0f cm", a);
    printf("\nKeliling = %.0f cm", k);
    printf("\nLuas = %.0f cm^2\n", l);

    float a2, b2, c2, l2, k2;
    scanf("%f", &a2);
    scanf("%f", &b2);

    c2 = sqrt(b2 * b2 - a2 * a2);
    k2 = a2 + b2 + c2;
    l2 = 0.5 * c2 * a2;

    printf("Alas = %.0f cm", c2);
    printf("\nTinggi = %.0f cm", a2);
    printf("\nKeliling = %.0f cm", k2);
    printf("\nLuas = %.0f cm^2", l2);
}