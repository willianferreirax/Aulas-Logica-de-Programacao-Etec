#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 71");
	int dia1,mes1,ano1,dia2,mes2,ano2;
	
	printf("Digite a primeira data");
	
		printf("Digite o dia");
		scanf("%d",&dia1);
		printf("Digite o mês");
		scanf("%d",&mes1);
		printf("Digite o ano");
		scanf("%d",&ano1);
	
	printf("Digite a segunda data");
	
		printf("Digite o dia");
		scanf("%d",&dia2);
		printf("Digite o mês");
		scanf("%d",&mes2);
		printf("Digite o ano");
		scanf("%d",&ano2);
		
	if(ano1>ano2){
		printf("%d/%d/%d , %d/%d/%d",dia2,mes2,ano2,dia1,mes1,ano1);
	}
	else{
		if(ano1<ano2){
			printf("%d/%d/%d , %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2);
		}
		else{
			if(ano1=ano2){
				if(mes1>mes2){
					printf("%d/%d/%d , %d/%d/%d",dia2,mes2,ano2,dia1,mes1,ano1);	
				}
				else{	
				if(mes1<mes2){
					printf("%d/%d/%d , %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2);
				}
				else{
					if(mes1=mes2){
						if(dia1>dia2){
							printf("%d/%d/%d , %d/%d/%d",dia2,mes2,ano2,dia1,mes1,ano1);
						}
						else{
							if(dia1<dia2){
								printf("%d/%d/%d , %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2);
							}
						}
					}
				}
			}
		}
	}
}
system("PAUSE");
return(0);
}
