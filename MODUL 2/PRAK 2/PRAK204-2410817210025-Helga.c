#include <stdio.h>

int main(){
    float r, t, v, l, k;
    scanf("%f", &r);
    scanf("%f", &t);

    float pi = 3.14286;
    v = pi * r * r * t;
    l = 2 * pi * r * (r + t);
    k = 2 * pi * r;

    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);

    float r2, t2, v2, l2, k2;
    scanf("%f %f", &r2, &t2);

    float pi2 = 3.14286;
    v2 = pi2 * r2 * r2 * t2;
    l2 = 2 * pi2 * r2 * (r2 + t2);
    k2 = 2 * pi2 * r2;

    printf("Volume = %.2f\n", v2);
    printf("Luas = %.2f\n", l2);
    printf("Keliling = %.2f\n", k2);
}