#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float alt,pesoi;
	int sex;
	printf("Digite sua altura\n");
	scanf("%f",&alt);
	printf("\nDigite seu sexo, 1- masculino 2-feminino\n");
	scanf("%d",&sex);
		if(sex==1){
		
		pesoi=((72.7)*alt)-58;
		printf("\nSeu peso ideal deve ser %f\n",pesoi);
	}
	
	
		if(sex==2){
			
		pesoi=((62.1)*alt)-44.7;
		printf("\nSeu peso ideal deve ser %f",pesoi);	
		}
		system("PAUSE");
		return(0);
		
	
}
