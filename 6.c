#include <stdio.h>

int main(){

    int a,b,c,d,e,f;
    printf("quantas prestacoes o concorcio possui?");
    scanf("%d",&a);
    printf("quantas foram pagas?");
    scanf("%d",&b);
    printf("qual o valor atual?");
    scanf("%d",&c);
    d = a-b;
    e = c/d;
    printf("voce deve %d, e falta %d prestacoes a serem pagas",e,d);
return 0;
}
