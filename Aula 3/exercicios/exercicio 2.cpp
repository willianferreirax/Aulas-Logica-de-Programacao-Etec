#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float pes,alt,imc;
	
	printf("Digite seu peso");
	scanf("%f",&pes);
	
	printf("Digite sua altura");
	scanf("%f",&alt);
	
	imc=pes/pow(alt,2);
	
	if(imc<18){
		printf("Seu IMC est� classificado como - Magreza");
	}
		else{
			if(imc>=18 && imc<=24.9){
				printf("Seu IMC est� classificado como - Saud�vel");
			}
		
			else{
				if(imc>=25 && imc<=29.9){
					printf("Seu IMC est� classificado como - Sobrepeso");
				}
			
				else{
					if(imc>=30){
						printf("Seu IMC est� classificado como - Obesidade");
					
					}
				}
				system("PAUSE");
				return(0);
			}
		}
}
