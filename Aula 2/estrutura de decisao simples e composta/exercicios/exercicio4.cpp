#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 72");
	int senha;
	
	printf("Digite a senha de 5 digitos\n");
	scanf("%d",&senha);
		if(senha==12345){
			printf("\nAcesso liberado!");
		}
		else{
			printf("Acesso negado!");
		}
		system("PAUSE");
		return(0);
		
}
