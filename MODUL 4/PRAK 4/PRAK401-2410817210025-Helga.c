#include <stdio.h>

int main(){
    int x;
    char a;

    scanf("%d", &x);
    scanf(" %c", &a);

    for(int i = 1; i <= 50; i++){
        if(i % x == 0){
            printf("%c ", a);
        }
        else{
            printf("%d ", i);
        }
    }
}