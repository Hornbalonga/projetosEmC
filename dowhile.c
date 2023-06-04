#include <stdio.h>


int main(){

int v[5 ], cont, n = 0,n2= 9999;

for(cont = 0; cont <5; cont++){

    printf("digite um numero");
    scanf("%d",&v[cont]);


    if(v[cont]> n){
        n = v[cont];
    }
    if(v[cont]< n2){
        n2= v[cont];
    }


}
printf("o maior numero   %d",n);
printf("menor numero  %d",n2);
///
}
