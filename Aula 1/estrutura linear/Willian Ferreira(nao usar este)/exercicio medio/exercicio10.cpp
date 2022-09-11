#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	char nome[30];
	float n1,n2,n3,n4,md;
	printf("Digite o nome do aluno\n");
	scanf("%s",&nome);
	printf("\nDigite a primeira nota\n");
	scanf("%f",&n1);
	printf("\nDigite a segunda nota\n");
	scanf("%f",&n2);
	printf("\nDigite a terceira nota\n");
	scanf("%f",&n3);
	printf("\nDigite a quarta nota\n");
	scanf("%f",&n4);
	md=(n1+n2+n3+n4)/4;
	printf("\n%s sua nota é %f",nome,md);
	
	system("PAUSE");
	return(0);
	
}
