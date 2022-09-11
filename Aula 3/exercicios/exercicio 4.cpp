#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("COLOR 71");
	setlocale(LC_ALL,"Portuguese");
	int m;
	
	printf("Digite um número");
	scanf("%d",&m);
	
	if(m==1){
		printf("Seu número corresponde a janeiro");
	}
	else{
		if(m==2){
		printf("Seu número corresponde a fevereiro");
		}
		else{
			if(m==3){
			printf("Seu número corresponde a março");
			}
			else{
				if(m==4){
				printf("Seu número corresponde a abril");
				}
				else{
					if(m==5){
					printf("Seu número corresponde a maio");
					}
					else{
						if(m==6){
						printf("Seu número corresponde a junho");
						}
						else{
							if(m==7){
							printf("Seu número corresponde a julho");
							}
							else{
								if(m==8){
								printf("Seu número corresponde a agosto");
								}
								else{
									if(m==9){
									printf("Seu número corresponde a setembro");
									}
									else{
										if(m==10){
										printf("Seu número corresponde a outubro");
										}
										else{
											if(m==11){
											printf("Seu número corresponde a novembro");
											}
											else{
												if(m==12){
												printf("Seu número corresponde a dezembro");
												}
												else{
													printf("Digite um número que corresponda a um mês");
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
