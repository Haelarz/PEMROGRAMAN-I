#include <stdio.h>

int main(){
    int a, b, s;
    scanf("%d %d", &a, &b);
    int matrix[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &s);
            matrix[i][j] = s;
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}