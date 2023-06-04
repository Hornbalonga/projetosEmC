#include <stdio.h>
int main(){

    int b,n,v,a,f,c,e;

    printf("quantos votos brancos?");
    scanf("%d", &b);
    printf("quantos votos nulos?");
    scanf("%d", &n);
    printf("quantos votos validos?");
    scanf("%d", &v);
    a = b+v+n;
    f = (100*b)/a;
    c = (100*n)/a;
    e = (100.*v)/a;

    printf("a soma de todos, deram %d votos. Sendo, %d porcento brancos, %d nulos e %d validos. ",a,f,c,e);


return 0;
}
