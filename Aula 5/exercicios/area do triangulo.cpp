#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 40");
float i,BST,ALT,ART;

do{
	

puts("digite a base do triangulo");
scanf("%f",&BST);
puts("digite a altura do triangulo");
scanf("%f",&ALT);
ART=ALT*BST;
printf("\nA area do triangulo e %f \n",ART);
i=i+1;
}while(i<8);

system("PAUSE");
return(0);


}
