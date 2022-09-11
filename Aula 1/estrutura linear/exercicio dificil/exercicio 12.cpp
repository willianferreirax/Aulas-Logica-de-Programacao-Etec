#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("COLOR 74");
	setlocale(LC_ALL,"Portuguese");
	float seg,hr,min;
	printf("Digite um valor em segundos\n");
	scanf("%f",&seg);
	min=seg/60;
	hr=min/60;
	printf("\nOs segundos informados correspondem à %f minutos\n",min);
	printf("Os segundos informados correspondem à %f horas",hr);
	
	system("PAUSE");
	return(0);
	
}
