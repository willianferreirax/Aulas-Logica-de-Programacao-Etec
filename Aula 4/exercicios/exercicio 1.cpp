#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 72");
		
	float v500,total;
	int i;
	
	v500=500;
	while(i<4){
		total=v500+v500*0.01;
		v500=total;
		
		printf("\nO saldo após o %d º mês é %f",i,total);
	i=i+1;
	}
	system("PAUSE");
	return(0);
}
