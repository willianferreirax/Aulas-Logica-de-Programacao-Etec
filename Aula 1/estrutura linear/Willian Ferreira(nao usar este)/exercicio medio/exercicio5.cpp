#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main( ){
	system("COLOR 71");
float vh,ht,bn,nd,sb,sl;
bn=300;
printf("Digite o valor da hora");
scanf("%f",&vh);
printf("Digite a quantidade de horas trabalhadas no m�s");
scanf("%f",&ht);
printf("Digite o numero de dependentes");
scanf("%f",&nd);
sb=vh*ht;
sl=sb+(bn*nd);
printf("Seu salario bruto � %f",sb);
printf("E o salario liquido � %f",sl);
system("PAUSE");
return(0);
}
