#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    int baris[a];
    for(int i = 0; i < a; i++){
        scanf("%d", &b);
        baris[i] = b;
    }
    for(int i = 0; i < a; i++){
        printf("%d ",  baris[i] * (i + 1));
    }
}