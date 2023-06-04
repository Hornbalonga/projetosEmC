#include <stdio.h>

int main() {

int semana,valor,a,b,c;

printf("digite as horas trabalhadas na semana:");
scanf("%d", &semana);

printf("valor da hora:");
scanf("%d",&valor);
a = semana * valor;
b = (a*50)/100;
c = (a*100)/100;
if(semana == 40){


    printf("sem adicional  %d",a);
    }
if(semana >40 && <=60){
    printf("acresimo de 50%% %d",b);
}
if(semana>60){


printf("acressimo de 100%% %d",c);
}

    return 0;

}
