#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	int ops,resp;

do{	
	printf("Escolha seu pedido\n");
	printf("1-BigMac\n");
	printf("2-Quarteir�o\n");
	printf("3-MacChicken\n");
	printf("4-Cheddar MacMelt\n");
	printf("5-MacMax\n");
	scanf("%d",&ops);

	
	if(ops==1){
		printf("Voc� escolheu o BigMac");
	}
		else{
			if(ops==2){
				puts("Voc� escolheu o Quarteir�o");
			}
			else{
				if(ops==3){
					puts("Voc� escolheu o MacChicken");
				}
				else{
					if(ops==4){
						puts("Voc� escolheu o Cheddar MacMelt");
					}
					else{
						if(ops==5){
							puts("Voc� escolheu o MacMax");
						}
						else{
							puts("Digite uma op��o valida");
						}
					}
				}
			}
		}
		puts("Deseja pedir denovo ? 1-sim 2-n�o");
		scanf("%d",&resp);
}while(resp==1);
		system("PAUSE");
		return(0);
}
