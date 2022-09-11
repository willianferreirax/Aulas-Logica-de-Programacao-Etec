#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 40");
float BST,ALT,ART;
printf("digite a base do triangulo\n");
scanf("%f",&BST);
printf("\ndigite a altura do triangulo\n");
scanf("%f",&ALT);
ART=ALT*BST;
printf("\nA area do triangulo e %f \n",ART);
system("PAUSE");
return(0);


}
