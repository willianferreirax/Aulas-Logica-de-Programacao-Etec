#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 73");
	int dat_nasc,ano,idm;
	printf("Digite o ano atual\n");
	scanf("%d",&ano);
	printf("\nDigite seu ano de nascimento\n");
	scanf("%d",&dat_nasc);
	idm=ano-dat_nasc;
		if(idm>=18){
			printf("\nVoc� atingiu a maioridade");
		}
		else{
			printf("\nVoc� n�o atingiu a maioridade");
		}
		system("PAUSE");
	return(0);
	
}
