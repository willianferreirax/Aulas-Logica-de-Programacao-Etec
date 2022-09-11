#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float lado1,lado2,lado3;
	int i;
	
for(i=1;i<=10;i++){

	
	puts("\nDigite um dos lados do triângulo");
	scanf("%f",&lado1);
	puts("\nDigite um dos lados do triângulo");
	scanf("%f",&lado2);
	puts("\nDigite um dos lados do triângulo");
	scanf("%f",&lado3);
	
	if(lado1+lado2>lado3 && lado3+lado1>lado2 && lado2+lado3>lado1){
		if(lado1==lado2 && lado1==lado3 && lado2==lado3){
			puts("Seu triângulo é um triângulo equilatero");
			}
			else{
				if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
					puts("Seu triângulo é um triângulo esqualeno");
				}
				else{
					if(lado1=lado2 && lado1!=lado3){
						puts("Seu triângulo é um triângulo isosceles");
					}
					else{
						if(lado1==lado3 && lado1!=lado2){
							puts("Seu triângulo é um triângulo isosceles");
						}
						else{
							if(lado2==lado3 && lado1!=lado2){
								puts("Seu triângulo é um triângulo isosceles");
							}
						}
					}
				}
			}
		}
		else{
			puts("Não compõem um triângulo");
		}
}
		system("PAUSE");
		return(0);
	}
