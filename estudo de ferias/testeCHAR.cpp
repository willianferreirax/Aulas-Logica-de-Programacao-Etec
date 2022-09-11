#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[7];
	int i;
	
	puts("Digite o nome");
	scanf("%s",&nome);
	
	for(i=0;i<5;i++){
		printf("A %dª letra do  nome é %c \n",i,nome[i]);
		
	}
	
	system("PAUSE");
	return(0);
}
