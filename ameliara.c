#include <stdio.h>

void soma(int n1, int n2){
  printf("soma: %d",n1 + n2);
}

void sub(int n3, int n4){
  printf("subitra��o: %d", n3 - n4);
}

void mult(int n5, int n6){
  printf("multiplica��o: %d", n5 * n6);
}




int main(){
  int re, nu1, nu2;

  printf("---Menu---\n");
printf(" 1 - soma \n 2 - subtra��o \n 3 - multiplica��o \n 0 - sair \n");
  scanf("%d",re);

  if(re == 1){
  printf("insira o numero ");
  scanf("%d", &nu1,nu2);
  soma(nu1,nu2);
    }
  if(re == 2){
  printf("insira o numero ");
  scanf("%d", &nu1,nu2);
  sub(nu1,nu2);
  }
  if(re == 3){
  printf("insira o numero ");
  scanf("%d", &nu1,nu2);
  mult(nu1,nu2);
  }
  if(re == 0){
 printf("adeus");
}
  }
