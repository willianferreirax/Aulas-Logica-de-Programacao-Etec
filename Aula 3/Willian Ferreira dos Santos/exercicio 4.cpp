#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	int m;
	
	printf("Digite um n�mero");
	scanf("%d",&m);
	
	if(m==1){
		printf("Seu n�mero corresponde a janeiro");
	}
	else{
		if(m==2){
		printf("Seu n�mero corresponde a fevereiro");
		}
		else{
			if(m==3){
			printf("Seu n�mero corresponde a mar�o");
			}
			else{
				if(m==4){
				printf("Seu n�mero corresponde a abril");
				}
				else{
					if(m==5){
					printf("Seu n�mero corresponde a maio");
					}
					else{
						if(m==6){
						printf("Seu n�mero corresponde a junho");
						}
						else{
							if(m==7){
							printf("Seu n�mero corresponde a julho");
							}
							else{
								if(m==8){
								printf("Seu n�mero corresponde a agosto");
								}
								else{
									if(m==9){
									printf("Seu n�mero corresponde a setembro");
									}
									else{
										if(m==10){
										printf("Seu n�mero corresponde a outubro");
										}
										else{
											if(m==11){
											printf("Seu n�mero corresponde a novembro");
											}
											else{
												if(m==12){
												printf("Seu n�mero corresponde a dezembro");
												}
												else{
													printf("Digite um n�mero que corresponda a um m�s");
												}
											}
										}
									}
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
