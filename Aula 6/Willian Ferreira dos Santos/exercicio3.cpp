#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("COLOR 2d");
	setlocale(LC_ALL,"Portuguese");
	float r,alt,area,mult;
	int i;
	
for(i=1;i<=5;i++){

	
	puts("\nDigite o raio de uma lata:");
	scanf("%f",&r);
	puts("Digite a altura de uma lata");
	scanf("%f",&alt);
	mult=3.14*r*alt;
	area=2*mult;
	printf("\nA área externa da sua lata é %f",area);
}
	
	system("PAUSE");
	return(0);
}
