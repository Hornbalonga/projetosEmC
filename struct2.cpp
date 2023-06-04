#include <stdio.h>
#include <stdlib.h>

int main(){
	int soma, i;
	char matriz[30]= {"Ameliara"};
	for(i= 0;i < 20; i++){
		if(matriz[i] == 'a' ){
			soma = soma + 1;
	}
	if(matriz[i] == 'e'){
		soma = soma + 2;
		}
		if(matriz[i] == 'i'){
		soma = soma + 3;
		}
		if(matriz[i] == 'o'){
		soma = soma + 4;
		}
		if(matriz[i] == 'u'){
		soma = soma + 5;
		}
	printf("%c",matriz[i]);
}
printf("soma : %d",soma);
}
