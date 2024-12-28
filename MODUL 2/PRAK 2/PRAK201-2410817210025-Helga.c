#include <stdio.h>

int main(){
    char nm[50];
    char nim[30];
    char kls[30];
    char ttl[50];
    char a[50];
    char hb[20];
    char hp[30];
    printf("Nama                    : ");
    scanf("%49[^\n]", &nm);
    getchar();

    printf("NIM                     : ");
    scanf("%29s", &nim);
    getchar();

    printf("Kelas Paralel           : ");
    scanf("%29s", &kls);
    getchar();

    printf("Tempat/Tanggal Lahir    : ");
    scanf("%49[^\n]", &ttl);
    getchar();

    printf("Alamat                  : ");
    scanf("%49[^\n]", &a);
    getchar();

    printf("Hobby                   : ");
    scanf("%19[^\n]", &hb);
    getchar();

    printf("No. HP                  : ");
    scanf("%29[^\n]", &hp);
    getchar();
}