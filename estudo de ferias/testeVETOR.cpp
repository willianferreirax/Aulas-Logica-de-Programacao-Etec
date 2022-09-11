#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int i;
	float aluno[10],n1,n2,n3,n4;
	
	for(i=0;i<11;i++){
	
		puts("Digite a primeira nota do aluno");
		scanf("%f",&n1);
		puts("Digite a segunda nota do aluno");
		scanf("%f",&n2);
		puts("Digite a terceira nota do aluno");
		scanf("%f",&n3);
		puts("Digite a quarta nota do aluno");
		scanf("%f",&n4);
		system("CLS");
		aluno[i]=(n1+n2+n3+n4)/4;		
	}	
	
	for(i=0;i<11;i++){
		printf("%f\n",aluno[i]);	
	}
	
	system("PAUSE");
	return(0);
	
}
