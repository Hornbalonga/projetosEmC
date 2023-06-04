#include  <stdio.h>
#include <stdlib.h>

FILE *parquivo;

void ABRE(){
	parquivo = fopen("alunos.txt","a+b");
}

void MENU(){
	printf("-----Tela Inicial-----\n");
	printf("1-Cadastrar aluno\n");
	printf("2-Editar aluno\n");
	printf("3-Remover aluno\n");
	printf("4-Listagem geral\n");
	printf("5-Listagem por sexo\n");
	printf("6-Listagem por curso\n");
	printf("0-sair\n");
}


int main(){
	int deci;
	ABRE();
	do{
		MENU();
		scanf("%d",&deci);
		switch(deci){
		
		case 1: 
		printf("1");
		system("cls");
		break;
		
		
			case 2: 
		printf("2");
		break;
		
			case 3: 
		printf("3");
		break;
		
			case 4: 
		printf("4");
		break;
		
		default: 
		break;
		}
	}while (deci!=0);
	printf("tchau!");
}

