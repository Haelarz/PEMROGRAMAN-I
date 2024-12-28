#include <stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    if(a >= 100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    else if(a >= 20){
        printf("Puluhan");
    }
    else if(a >= 11){
        printf("Belasan");
    }
    else if(a >= 1){
        printf("Satuan");
    }
    else{
        printf("Nol");
    }
}