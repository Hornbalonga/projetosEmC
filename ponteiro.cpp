#include <stdio.h>
#include <stdlib.h>


typedef struct lista{
	int info;
	struct lista *prox;
}Lista;

Lista* crialista(){
	return NULL;
}

Lista* insere(Lista *ref, int valor){
	Lista *novoNo = (Lista*)malloc(sizeof(Lista));
	novoNo->info=valor;
	novoNo->prox = ref;
	ref= novoNo;
	return ref;
}

void inverte(Lista **ref){
      Lista *aux, *a, *b;
   if (*ref != NULL){
        aux = NULL;
        a = *ref;
        b = a->prox;
        do{
        	a->prox = aux;
            aux = a;
            b = b;
            if (b != NULL){
            	b = b->prox;
			}
          }while (a != NULL);
          
          *ref = aux;
       }
   }
void imprime(Lista *ref){
	Lista *a;
	if(ref==NULL){
		printf("Lista Vazia");
	}
	else
{
		for(a=ref;a!=NULL;a=a->prox){
			printf("%2d ",a->info);
		}
	}
}

int main(){
	
	Lista *ref=crialista();
	
	ref = insere(ref,1);
	ref = insere(ref,2);
	ref = insere(ref,3);
	ref = insere(ref,4);
	printf("\nlista normal\n");
	imprime(ref);
	inverte(&ref);
	printf("\nLista invertida\n");
	imprime(ref);
	
	return 0;
}
