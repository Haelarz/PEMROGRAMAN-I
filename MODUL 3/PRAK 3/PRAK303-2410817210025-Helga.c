#include <stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    if(a > 0){
        printf("postif");
    }
    else if(a < 0){
        printf("negatif");
    }
    else{
        printf("nol");
    }
}