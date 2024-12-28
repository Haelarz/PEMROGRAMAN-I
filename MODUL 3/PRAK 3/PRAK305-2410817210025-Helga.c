#include <stdio.h>
int main(){
    int s, d, h, m;

    scanf("%d", &s);

    d = s / 86400;
    s %= 86400;

    h = s / 3600;
    s %= 3600;

    m = s / 60;
    s %= 60;

    if(d > 0){
        printf("%d hari %02d:%02d:%02d", d, h, m, s);
    }
    else{
        printf("%02d:%02d:%02d", h, m, s);
    }
}