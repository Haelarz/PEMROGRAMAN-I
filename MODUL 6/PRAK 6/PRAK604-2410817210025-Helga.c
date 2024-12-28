#include <stdio.h>
#include <string.h>

int main(){
    char asli[100];
    char palsu[100];
    scanf("%99[^\n]", &asli);
    getchar();
    scanf("%99[^\n]", &palsu);
    getchar();
    int a, b;
    int x = 0, y = 0;
    a = strlen(asli);
    b = strlen(palsu);
    if(a != b){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        for(int i = 0; i < a; i++){
            if(asli[i] == palsu[i]){
                printf("*");
                x++;
            }
            else{
                printf("#");
                y++;
            }
        }
        printf("\n* = %d", x);
        printf("\n# = %d", y);
    if(x >= y){
        printf("\nPesan Asli");
    }
    else if(x < y){
        printf("\nPesan Palsu");
    }
    }
}