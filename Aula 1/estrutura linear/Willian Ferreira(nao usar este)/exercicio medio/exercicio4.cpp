#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	system("COLOR 72");
	float dp,s1,s2,s3;
	dp=500;
	printf("O dep�sito inicial � de: %f\n",dp);
	s1=dp+((dp/100)*1);
	s2=s1+((s1/100)*1);
	s3=s2+((s2/100)*1);
	printf("\nO saldo ap�s o terceiro m�s � %f",s3);
	
	system("PAUSE");
	return(0);
}
