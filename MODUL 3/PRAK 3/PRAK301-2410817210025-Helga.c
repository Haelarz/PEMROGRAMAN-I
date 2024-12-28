#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    if (a > c) {
        int r = a;
        a = c;
        c = r;
    }
    if (b > c) {
        int r = b;
        b = c;
        c = r;
    }

    printf("%d %d %d", a, b, c);
}