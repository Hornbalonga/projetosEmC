#include <stdio.h>
#include <stdlib.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista *criaLista(){
	
	return NULL;
}
Lista *insere(Lista *ref, int valor){
	Lista *novoNo = (Lista*)malloc(sizeof(Lista));
	novoNo->info = valor;
	novoNo->prox = ref;
	ref = novoNo;
	return ref;
}
void imprimir(Lista *ref){
	Lista *p;
	printf("\nimprimindo lista...\n");
	if(ref == NULL){
		printf("lista vazia!");
		return;
		}
		if(ref != NULL){
		
		for(p = ref; p != NULL; p = p->prox)
			printf("%d",p->info);
		}	
		}
Lista *crescente(Lista *ref){
	Lista *c= ref;
	Lista *cr;
	int cs;
	cr->info;
	while(c != NULL){
		cs = c->info;
	}
	while(cr != NULL){
	if(c->info > cr->info){
	cs = c->info;
	c->info = cr->info;
	c->info = cs;
	}
	cr = cr->prox;
	}
	c = c->prox;
	return ref;
	}
	

int main(){
Lista *ref = criaLista();
int a;
printf("insira o numero");
scanf("%d",&a);
ref= insere(ref,a); 
imprimir(ref);
} 
