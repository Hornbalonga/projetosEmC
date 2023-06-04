#include <stdio.h>

int main(){

    int c;
    float a, b;
    printf("digite o seu salario");
    scanf("%f",&a);
    c = 15;
    b = (c*a)/100;
    printf("o salario atual e de R$%f, com o ajuste de %d porcento, sera R$%f",a,c,b);



return 0;
}
