#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int i,j,matriz[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("Digite um numero");
		scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	system("PAUSE");
	return(0);
}
