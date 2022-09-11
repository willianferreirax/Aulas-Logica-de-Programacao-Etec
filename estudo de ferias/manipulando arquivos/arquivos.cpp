#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");

    FILE *arq;

        arq = fopen("teste.txt","w+");

        puts("isso é um teste",arq);

        fclose(arq);



    system("PAUSE");
    return(0);

}
