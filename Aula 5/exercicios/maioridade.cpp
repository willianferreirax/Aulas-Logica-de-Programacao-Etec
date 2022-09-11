#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 73");
	int dat_nasc,ano,idm,i;
	
do{

	puts("Digite o ano atual");
	scanf("%d",&ano);
	puts("Digite seu ano de nascimento");
	scanf("%d",&dat_nasc);
	idm=ano-dat_nasc;
		if(idm>=18){
			puts("Você atingiu a maioridade");
		}
		else{
			puts("Você não atingiu a maioridade");
		}
		i=i+1;
		
}while(i<15);
system("PAUSE");
	return(0);
	
}
