#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	system("COLOR 72");
	float dp,s1,s2,s3;
	dp=500;
	printf("O depósito inicial é de: %f\n",dp);
	s1=dp+((dp/100)*1);
	s2=s1+((s1/100)*1);
	s3=s2+((s2/100)*1);
	printf("\nO saldo após o terceiro mês é %f",s3);
	
	system("PAUSE");
	return(0);
}
