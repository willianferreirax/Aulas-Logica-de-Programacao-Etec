#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float alt,pesoi;
	int sex,i;
	
	while(i<15){
	
		puts("Digite sua altura\n");
		scanf("%f",&alt);
		puts("Digite seu sexo, 1- masculino 2-feminino");
		scanf("%d",&sex);
			if(sex==1){
		
				pesoi=((72.7)*alt)-58;
				printf("\nSeu peso ideal deve ser %f\n",pesoi);
			}
	
	
			if(sex==2){
			
				pesoi=((62.1)*alt)-44.7;
				printf("\nSeu peso ideal deve ser %f",pesoi);	
			}
			i=i+1;
	}
		system("PAUSE");
		return(0);
}
