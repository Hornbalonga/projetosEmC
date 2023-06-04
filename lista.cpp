#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista *prox;
}Lista;


Lista *criaLista(){
	
	return NULL;
}

Lista *insere(Lista * ref, int valor){
	Lista *novoNo = (Lista*)malloc(sizeof(Lista));
	novoNo->info = valor;
	novoNo->prox = ref;
	ref = novoNo;
	return ref;
}

void imprime(Lista *ref){
	Lista *p;
	printf("impressao...");
	if(ref == NULL){
	printf("nada encontrado");
	}
	if(ref != NULL){
		for(p = ref; p != NULL; p = p->prox){
			printf("\n%d", p->info);
		}
	}	
}

/*Lista *remover(Lista *ref, int valor){
	Lista *ant = NULL;
	Lista *p = ref;
	
	while(p!= NULL && p->prox != p->info){
		ant = p;
		p = p->prox;
	}
		if(p == NULL){
			printf("valor nao encontrado");
			return ref;
		}
		else{
			ant->prox = p->prox;
			free(p);
			return ref;
		}
}*/
Lista* remove(Lista* ref, int valor)
{
  Lista* ant=NULL;
  Lista* p = ref;
  while (p != NULL && p->info != elemBuscado)
{
  ant = p;
  p = p->prox;
}
if (p == NULL) //elemento não encontrado
  return ref;
//remove primeiro elemento
if (p == ref)
  ref = p->prox;
else //remove do meio ou fim da lista
  ant->prox = p->prox;
  free(p);
  return ref;
}


int main(){
Lista *ref = criaLista();
ref = insere(ref,11);
ref = insere(ref,22);
ref = insere(ref,33);
ref = insere(ref,44);
imprime(ref);
}
