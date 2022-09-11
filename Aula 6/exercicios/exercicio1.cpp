#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 71");
	float a,b,c,d,x1,x2;
	int i;
	
for(i=1;i<=5;i++){

	
	puts("Equação do Segundo Grau\n");
	puts("Digite um valor para A");
	scanf("%f",&a);
	puts("Digite um valor para B");
	scanf("%f",&b);
	puts("Digite um valor para C");
	scanf("%f",&c);
	d=pow(b,2)-4*a*c;
	
	if(d>0){
	
	x1=((-b)+sqrt(d))/2*a;
	x2=((-b)-sqrt(d))/2*a;
	printf("x1 é igual a %f ,e x2 é igual a %f ",x1,x2);
}
else{
		printf("Delta é zero");
	}
}
	system("PAUSE");
	return(0);
}
