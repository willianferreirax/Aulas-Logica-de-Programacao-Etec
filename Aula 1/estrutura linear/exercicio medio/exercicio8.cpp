#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 31");
	float x, n, res, xn;
	printf("Digite X: ");
	scanf("%f",&x);
	printf("Digte N: ");
	scanf("%f",&n);
	xn=x*n;
	res=pow(xn,2);
	printf("O resultado do cáulculo é %f",res);
	return(0);
	system("PAUSE");
}
