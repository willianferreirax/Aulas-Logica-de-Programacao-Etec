#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	float i,cm,mt,dc,mm;
	
do{

	printf("Digite uma medida em centimetros\n");
	scanf("%f",&cm);
	mt=cm/100;
	dc=cm/10;
	mm=cm*10;
	printf("\nHá %f metros na medida informada",mt);
	printf("\nHá %f decímetros na medida informada",dc);
	printf("\nHá %f milímetros na medida informada\n",mm);
	i=i+1;
}while(i<10);

	system("PAUSE");
	return(0);
	
}
