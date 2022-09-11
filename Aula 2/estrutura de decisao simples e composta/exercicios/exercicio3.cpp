#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 51");
	float peso,peso_ex,mult;
	printf("Digite o peso dos seus peixes");
	scanf("%f",&peso);
		if(peso>50){
			peso_ex=peso-50;
			mult=peso_ex*4;
			printf("A multa a ser paga será R$ %f ",mult);
		}
		
		else{
			printf("O peso esta dentro do limite");
		}
		system("PAUSE");
	return(0);
	
}
