#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void menu(){
printf("    ---menu---   \n");
printf("1- Cadastrar contas\n");
printf("2- Visualizar todas as contas\n");
printf("3- Exibir a conta com menor saldo\n");
}

int main(){

typedef struct{
int nconta;
char nome[100];
float saldo;
}ContaBancaria;

ContaBancaria conta[3];

int me = 1, c, msaldo =99999, mnome, mconta;

for(c=1; me!=0;c++){

menu();
scanf("%d", &me);
if(me ==1){
for(c=1;c<=3;c++){
printf("digite o numero da conta que queria criar\n");
scanf("%d",&conta[c].nconta);
printf("digite seu nome\n");
fflush(stdin);
gets(conta[c].nome);
printf("digite o seu saldo\n");
scanf("%f",&conta[c].saldo);
if(conta[c].saldo<msaldo){
    msaldo =conta[c].saldo;
    mconta = conta[c].nconta;
    mnome = conta[c].nome;
}
}
}
if(me ==2){
printf("---contas---\n");
for(c=1;c<=3;c++){
printf("%d\n %s\n %.2f\n",conta[c].nconta,conta[c].nome,conta[c].saldo);
}
}
if(me ==3){
printf("o menor saldo foi...\n");
printf("numero: %d\nnome: %s\nsaldo:%.2f\n",mconta,mnome,msaldo);
}
else{
}
}
}

