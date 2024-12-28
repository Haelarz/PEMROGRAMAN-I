#include <stdio.h>

int main(){
    int x;

    scanf("%d", &x);
    for(int i = 1; i <= x; i+=2){
        printf("%d ", i);
    }
    printf("\n");
    for(int i = x; i >= 2; i -=2){
        printf("%d ", i);
    }
}