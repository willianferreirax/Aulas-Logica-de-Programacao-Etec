#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	int ops;
	
	printf("Escolha seu pedido\n");
	printf("1-BigMac\n");
	printf("2-Quarteirão\n");
	printf("3-MacChicken\n");
	printf("4-Cheddar MacMelt\n");
	printf("5-MacMax\n");
	scanf("%d",&ops);
	
	if(ops==1){
		printf("Você escolheu o BigMac");
	}
		else{
			if(ops==2){
				printf("Você escolheu o Quarteirão");
			}
			else{
				if(ops==3){
					printf("Você escolheu o MacChicken");
				}
				else{
					if(ops==4){
						printf("Você escolheu o Cheddar MacMelt");
					}
					else{
						if(ops==5){
							printf("Você escolheu o MacMax");
						}
						else{
							printf("Digite uma opção valida");
						}
					}
				}
			}
		}
		system("PAUSE");
		return(0);
}
