#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	float horario_uso;
	
	printf("Digite sua hora de inicio do turno de trabalho");
	scanf("%f",&horario_uso);
		
		if(horario_uso>=5 && horario_uso<=12.59){
			printf("Seu turno �: Manh�-5hrs �s 12:59hrs");}
			else{
				if(horario_uso>=13 && horario_uso<=20.59){
					printf("Seu turno �:Tarde-13hrs �s 20:59hrs");}
					else{
						if(horario_uso>=21 && horario_uso<=23.59){
							printf("Seu turno �:Noite-21hrs �s 4:59hrs");}
							else{
								if(horario_uso>=0 && horario_uso<=4.59){
									printf("Seu turno �:Noite-21hrs �s 4:59hrs");}
									else{
										printf("Digite uma hora valida");
									}
								
							}
						
					}
				
			}
	
		
		
		
		system("PAUSE");
		return(0);
}
