#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 70");
float vh,ht,bn,nd,sb,sl;
bn=300;
printf("Digite o valor da hora\n");
scanf("%f",&vh);
printf("\nDigite a quantidade de horas trabalhadas no m�s\n");
scanf("%f",&ht);
printf("\nDigite o numero de dependentes\n");
scanf("%f",&nd);
sb=vh*ht;
sl=sb+(bn*nd);
printf("\neu salario bruto � %f",sb);
printf("E o salario liquido � %f",sl);
system("PAUSE");
return(0);
}
