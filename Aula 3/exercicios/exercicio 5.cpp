#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,n4,med;
	int i;
	
for(i=1;i<=10;i++){

	
	puts("\nDigite as notas do aluno");
	puts("Digite a primeira nota");
	scanf("%f",&n1);
	puts("Digite a segunda nota");
	scanf("%f",&n2);
	puts("Digite a terceira nota");
	scanf("%f",&n3);
	puts("Digite a quarta nota");
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
}
	system("PAUSE");
	return(0);
}
