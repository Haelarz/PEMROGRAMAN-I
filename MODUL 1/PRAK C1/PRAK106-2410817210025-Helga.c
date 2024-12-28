#include <stdio.h>

int main(){
    printf("Variabel a bernilai 4\n");
    printf("Variabel b bernilai 8\n");
    printf("Variabel c bernilai 3\n");

    int a = 4;
    int b = 8;
    int c = 3;
    int sama = (a == b);
    printf("Apakah a sama dengan b? jawabannya adalah %d\n", sama);

    int lebih =  (b > c);
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", lebih);

    int tidak = (a != c);
    printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n", tidak);
}