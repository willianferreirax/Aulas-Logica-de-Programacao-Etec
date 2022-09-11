#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main( ){
	system("COLOR 71");
float vh,ht,bn,nd,sb,sl;
bn=300;
printf("Digite o valor da hora");
scanf("%f",&vh);
printf("Digite a quantidade de horas trabalhadas no mês");
scanf("%f",&ht);
printf("Digite o numero de dependentes");
scanf("%f",&nd);
sb=vh*ht;
sl=sb+(bn*nd);
printf("Seu salario bruto é %f",sb);
printf("E o salario liquido é %f",sl);
system("PAUSE");
return(0);
}
