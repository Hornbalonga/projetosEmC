#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
	char nome[40];
	float nota;
	
}Cadastro;

Cadastro OP[2];

void menu(){
	printf("    ----MENU----    \n");
	printf("1- cadastrar aluno \n");
	printf("2- exibir media\n");
	printf("3- maior e menor nota\n");
	printf("0- sair\n");
}

int main(){
	int i,j;
	char mnome[40];
	float media,nmaior = 0, nmenor = 9999; 
	do{
	menu();
	scanf("%d",&i);
	switch(i){
		case 1:
			for(i=0;i<2;i++){
			printf("digite o nome\n");
			fflush(stdin);
			gets(OP[i].nome);
			
			printf("digite a nota\n");
			scanf("%f",& OP[i].nota);
		media = media+OP[i].nota;
		
		if(OP[i].nota> nmaior){
			nmaior = OP[i].nota;
			
		}
		if(OP[i].nota<nmenor){
			nmenor = OP[i].nota;
		}
		
		}
		system("cls");
		break;		
		

			
		
		case 2:
			printf("Media:\n%.2f\n",media/2);
			system("pause");
			system("cls");
			break;
			
		case 3:
			printf("maior nota: %f\nmenor:%f\n",nmaior,nmenor);
			system("pause");
			system("cls");
			
		case 0:
			printf("tchauzinho!");
			break;
			
			default:
				printf("digite um numero valido\n");
				system("pause");
				system("cls");
	
}
	}while(i!=0);
}
