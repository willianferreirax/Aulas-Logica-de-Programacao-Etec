#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 71");
	float a,b,c,d,x1,x2;
	printf("Equa��o do Segundo Grau\n");
	printf("\nDigite um valor para A\n");
	scanf("%f",&a);
	printf("\nDigite um valor para B\n");
	scanf("%f",&b);
	printf("\nDigite um valor para C\n");
	scanf("%f",&c);
	d=pow(b,2)-4*a*c;
	
	x1=((-b)+sqrt(d))/2*a;
	x2=((-b)-sqrt(d))/2*a;
	printf("seu x1 � %f, seu x2 � %f",x1,x2);
	system("PAUSE");
	return(0);
}
