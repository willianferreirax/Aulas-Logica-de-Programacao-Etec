#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float lado1,lado2,lado3;
	printf("Digite um dos lados do tri�ngulo");
	scanf("%f",&lado1);
	printf("Digite um dos lados do tri�ngulo");
	scanf("%f",&lado2);
	printf("Digite um dos lados do tri�ngulo");
	scanf("%f",&lado3);
	
	if(lado1+lado2>lado3 && lado3+lado1>lado2 && lado2+lado3>lado1){
		if(lado1==lado2 && lado1==lado3 && lado2==lado3){
			printf("Seu tri�ngulo � um tri�ngulo equilatero");
			}
			else{
				if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
					printf("Seu tri�ngulo � um tri�ngulo esqualeno");
				}
				else{
					if(lado1=lado2 && lado1!=lado3){
						printf("Seu tri�ngulo � um tri�ngulo isosceles");
					}
					else{
						if(lado1==lado3 && lado1!=lado2){
							printf("Seu tri�ngulo � um tri�ngulo isosceles");
						}
						else{
							if(lado2==lado3 && lado1!=lado2){
								printf("Seu tri�ngulo � um tri�ngulo isosceles");
							}
						}
					}
				}
			}
		}
		else{
			printf("N�o comp�em um tri�ngulo");
		}
		system("PAUSE");
		return(0);
	}
