#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 51");
    int AN, AA, IDA, ID2050;
    AA=2017;
    printf("Digite o ano em que voc� nasceu");
    scanf("%d",&AN);
    IDA=AA-AN;
    ID2050=2050-AN;
    printf("Sua idade atual � %d",IDA);
    printf("Sua idade em 2050 ser� %d" ,ID2050);
    system("PAUSE");
    return(0);
    
}

