#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float x, n, res, xn;
	printf("Digite X: ");
	scanf("%f",&x);
	printf("Digte N: ");
	scanf("%f",&n);
	xn=x*n;
	res=pow(xn,2);
	printf("O resultado do c�ulculo � %f",res);
	return(0);
}
