#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int valor;
	struct lista *prox;
} Lista;

Lista *cria(){
	return NULL;
}

Lista *insere(Lista *ref,int valor){
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	novo->valor = valor;
	novo->prox = ref;
	ref = novo;
	return ref;
}

void imprime(Lista *ref){
	Lista *p;
	if(ref == NULL){
		printf("lista vazia");
		return;
	}
	for(p = ref;p!= NULL; p= p->prox){
		printf("%d",p->valor);
	}
}

Lista *excluir(Lista *ref, int valor){
	Lista *aux = NULL;
	Lista *p = ref;
	while(p != NULL && p->valor != valor){
		aux = p;
		 p = p->prox;
		 if(p == NULL){
		 	return ref;
		 }
		 if(p == ref){
		 	p = NULL;
		 }
		 else{
		 	aux->prox = p->prox;
		 }
	}
}
	

int main(){
	Lista *ref = cria();
	ref = insere(ref,1);
	ref = insere(ref,2);
	ref = insere(ref,3);
	ref = insere(ref,4);
	ref = insere(ref,5);
	ref = excluir(ref,1);
	imprime(ref);
}
