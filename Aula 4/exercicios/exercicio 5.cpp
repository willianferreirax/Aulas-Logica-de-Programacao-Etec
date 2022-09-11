#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 72");
	int senha,i;
	
while(i<3){
	puts("Digite a senha de 5 digitos");
	scanf("%d",&senha);
		if(senha==12345){
			printf("\nAcesso liberado!");
			i=4;
		}
		else{
			printf("Acesso negado!");
			i=i+1;
		}
		
}
if(i==3){
			puts("você errou 3 vezes");
		}
		system("PAUSE");
		return(0);
		
}
