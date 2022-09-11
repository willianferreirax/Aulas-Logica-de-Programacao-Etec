#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("COLOR 72");
	setlocale(LC_ALL,"Portuguese");
	int i,vh,dep,ht,vl,vb;
	
do{

	puts("Digite o valor da sua hora");
	scanf("%d",&vh);
	
	puts("Digite quantas horas você trabalha no mês");
	scanf("%d",&ht);
	
	puts("Digite quantos dependentes você tem");
	scanf("%d",&dep);
	
	vb=vh*ht;
	vl=vb+(dep*300);
	
	printf("Seu salário bruto é %d \n\nSeu salário liquido é %d\n",vb,vl);
	i=i+1;

}while(i<10);
	
	system("PAUSE");
	return(0);
}

