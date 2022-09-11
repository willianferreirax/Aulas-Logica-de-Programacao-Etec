#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,n4,med;
	
	printf("Digite as notas do aluno\n");
	printf("\nDigite a primeira nota\n");
	scanf("%f",&n1);
	printf("\nDigite a segunda nota\n");
	scanf("%f",&n2);
	printf("\nDigite a terceira nota\n");
	scanf("%f",&n3);
	printf("\nDigite a quarta nota\n");
	scanf("%f",&n4);
	
	med=(n1+n2+n3+n4)/4;
	
	if(med>=9){
		printf("O aluno foi Aprovado com - A");
	}
	else{
		if(med>=7 && med<9){
			printf("O aluno foi aprovado com - B");
		}
		else{
			if(med>=5 && med<7){
				printf("O aluno foi aprovado com - C");
			}
			else{
				if(med>=2.5 && med<5){
					printf("O aluno foi reprovado com - D");
				}
				else{
					if(med<2.5){
						printf("O aluno foi reprovado com - E");
					}
					
					
				}
			}
		}
	}
	system("PAUSE");
	return(0);
}
