#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 40");
float BS,ALT,AR;
int i;
while(i<10){

puts("digite a base do retangulo");
scanf("%f",&BS);
puts("digite a altura do retangulo");
scanf("%f",&ALT);
AR=ALT*BS;
printf("\nA area do retangulo e %f \n",AR);
i=i+1;
}
system("PAUSE");
return(0);
}
