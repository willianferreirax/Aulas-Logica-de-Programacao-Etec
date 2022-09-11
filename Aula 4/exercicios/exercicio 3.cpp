#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 35");
	char nome[30];
	float n1,n2,n3,n4,md;
	int i;
	
	while(i<7){
	
	puts("Digite o nome do aluno");
	scanf("%s",&nome);
	puts("Digite a primeira nota");
	scanf("%f",&n1);
	puts("Digite a segunda nota");
	scanf("%f",&n2);
	puts("Digite a terceira nota");
	scanf("%f",&n3);
	puts("Digite a quarta nota");
	scanf("%f",&n4);
	md=(n1+n2+n3+n4)/4;
	printf("\n%s sua nota é %f\n",nome,md);
	i=i+1;
}
	system("PAUSE");
	return(0);
	
}
