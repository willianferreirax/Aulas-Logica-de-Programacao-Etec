#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float lado1,lado2,lado3;
	printf("Digite um dos lados do triângulo");
	scanf("%f",&lado1);
	printf("Digite um dos lados do triângulo");
	scanf("%f",&lado2);
	printf("Digite um dos lados do triângulo");
	scanf("%f",&lado3);
	
	if(lado1+lado2>lado3 && lado3+lado1>lado2 && lado2+lado3>lado1){
		if(lado1==lado2 && lado1==lado3 && lado2==lado3){
			printf("Seu triângulo é um triângulo equilatero");
			}
			else{
				if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
					printf("Seu triângulo é um triângulo esqualeno");
				}
				else{
					if(lado1=lado2 && lado1!=lado3){
						printf("Seu triângulo é um triângulo isosceles");
					}
					else{
						if(lado1==lado3 && lado1!=lado2){
							printf("Seu triângulo é um triângulo isosceles");
						}
						else{
							if(lado2==lado3 && lado1!=lado2){
								printf("Seu triângulo é um triângulo isosceles");
							}
						}
					}
				}
			}
		}
		else{
			printf("Não compõem um triângulo");
		}
		system("PAUSE");
		return(0);
	}
