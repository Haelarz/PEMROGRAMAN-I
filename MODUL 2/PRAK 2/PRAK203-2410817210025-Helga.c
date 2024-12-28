#include <stdio.h>

int main(){
    float a, b, i, j, x, y, sum;
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    sum = (((a-b) * i) / j) - (x + y);
    printf("%.3f\n", sum);

    float a2, b2, i2, j2, x2, y2, sum2;
    scanf("%f %f", &a2, &b2);
    scanf("%f %f", &i2, &j2);
    scanf("%f %f", &x2, &y2);
    sum2 = (((a2-b2) * i2) / j2) - (x2 + y2);
    printf("%.3f\n", sum2);
}