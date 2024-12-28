#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a != b){
        printf("Jumlah tidak sama");
    }
    else{
        int baris1[a]; 
        int baris2[b];
        for(int i = 0; i < a; i++){
            scanf("%d", &baris1[i]);
        }
        for(int i = 0; i < b; i++){
            scanf("%d", &baris2[i]); 
        }
        for(int i = 0; i < a; i++){
            int n = baris1[i] * baris2[i];
            printf("%d ", n);
        }
    }
}