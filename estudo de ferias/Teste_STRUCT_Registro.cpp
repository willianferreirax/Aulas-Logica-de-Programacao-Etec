#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>


int main(){

	setlocale(LC_ALL,"Portuguese");
	system("COLOR 71");
	int op;
	int i,j,k,tam[10];


struct pessoas{

int idade;
char nome[30];

};


pessoas pessoa[10];
i=0;



do{
	    puts("Digite o nome da pessoa");
	    scanf("%s",&pessoa[i].nome);
	
	    tam[i]=strlen(pessoa[i].nome);
	
	    puts("Digite a idade da pessoa");
	    scanf("%d",&pessoa[i].idade);


	
	

	
    	puts("Deseja registrar outra pessoa?");
    	scanf("%d",&op);
    	i=i+1;
		k=k+1;
		system("CLS");
	}while(op==1);


	printf("As pessoas registradas foram:\n");

for(i=0;i<k;i++){

    for(j=0;j<tam[i];j++){
        printf("%c",pessoa[i].nome[j]);
    }


	printf(" com %d anos de idade\n\n\n",pessoa[i].idade);


}

system("PAUSE");
return(0);


}
