#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 15");
  float bs,al,ar;
  printf("Digite a base do retângulo:\n");
  scanf("%f",&bs);
  printf("\nDigite a altura do retângulo:\n");
  scanf("%f",&al);
  ar=bs*al;
  printf("\nArea do retangulo é igual a %f",ar);
  
  system("PAUSE");
  
  return(0);
}
