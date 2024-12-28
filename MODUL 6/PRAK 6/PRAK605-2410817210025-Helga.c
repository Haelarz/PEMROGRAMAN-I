#include <stdio.h>

int main(){
    int matrix1[10][10];
    int matrix2[10][10];
    int matrixs[10][10];
    int a, b, i, j, sum = 0;
    scanf("%d", &b);
    printf("Matriks A\n");
    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &matrix1[i][j]);
        }
    } 
    printf("Matriks B\n");
    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            for(a = 0; a < b; a++){
                sum = sum + matrix1[i][a] * matrix2[a][j];
            }
            matrixs[i][j] = sum;
            sum = 0;
        }
    }
    printf("Matriks AXB\n");
    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", matrixs[i][j]);
        }
        printf("\n");
    }
}