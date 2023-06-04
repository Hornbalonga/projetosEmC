# include <stdio.h>

typedef struct teste{
int ncelular;
int idade;
char nome[100];
} teste;
teste Teste;

int main(){
	printf("insira o nome");
	gets(Teste.nome);
	fflush(stdin);
	printf("o numero");
	scanf("%d",&Teste.ncelular);
	printf("idade");
	scanf("%d",&Teste.idade);
	printf("numero: %d  idade: %d nome:%s ",Teste.ncelular,Teste.idade,Teste.nome);
}
