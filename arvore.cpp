#include<stdio.h>
#include<stdlib.h>

typedef struct arvore{
	int info;
	struct arvore *direita;
	struct arvore *esquerda;
}No;

No *cria(int valor){
	No *novo = (No*)malloc(sizeof(No));
	novo->info = valor;
	novo->esquerda = NULL;
	novo->direita = NULL;
	return novo;	
}

void ordem(No* raiz){
	if(raiz == NULL){
	
		return;
	}
	
	ordem(raiz->esquerda);
	printf("-> %d ",raiz->info);
	ordem(raiz->direita);
}

void inverter(No *raiz,No** esp){
	if(raiz == NULL){
	return;
	}
	 *esp = cria(raiz->info);
    inverter(raiz->esquerda, &((*esp)->direita));
    inverter(raiz->direita, &((*esp)->esquerda));
}

int main(){
	No *tree = cria(1);
	No *esp = NULL;
	tree->direita = cria(4);
	tree->esquerda =cria(7);
	tree->esquerda = cria(9);
	tree->direita->direita = cria(11);
    tree->esquerda->direita = cria(24);
	printf("arvore\n");
	 inverter(tree, &esp);
	 ordem(tree);
	 printf("\n");
	 ordem(esp);
	 
}
