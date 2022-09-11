#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	int idad,i;
	
for(i=1;i<=7;i++){	
	
	printf("Digite a sua idade\n");
	scanf("%d",&idad);
	
	if(idad>=5 && idad<=7){
		printf("Nadador classificado como Infantil A");
	}
	else{
		if(idad>=8 && idad<=10){
			printf("Nadador classificado como Infantil B");
		}
		else{
			if(idad>=11 && idad<=13){
				printf("Nadador classificado como Juvenil A");
			}
			else{
				if(idad>=14 && idad<=17){
					printf("Nadador classificado como Juvenil B");
				}
				else{
					if(idad>=18){
						printf("Nadador classificado como Senior");
					}
					
					
				}
			}
		}
	}
}
	system("PAUSE");
	return(0);
}
