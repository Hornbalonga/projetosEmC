# include <stdio.h>
# include <stdlib.h>

int main(){
 int mat[3][3];
 int i,j,k;
 
 for(i=0;i<3;i++){
 	for(j=0;j<3;j++){
	printf("insira o valor da matriz [%d] [%d]",i,j);
	scanf("%d",&mat[i][j]); 
	}
	}
	for(i=0;i<3;i++){
 	k -=mat[i][2-i];
	printf("%d ",mat[i][2-i]);
 	}
	printf("%d",k);

}
	

