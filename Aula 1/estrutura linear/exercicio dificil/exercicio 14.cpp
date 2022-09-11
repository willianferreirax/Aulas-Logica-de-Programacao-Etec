#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	float r,vol;
	printf("Digite o raio de uma esfera\n");
	scanf("%f",&r);
	vol=4*(3.14*(pow(r,3)))/3;
	printf("\nO volume da esfera é %f",vol);
	system("PAUSE");
	return(0);
}
