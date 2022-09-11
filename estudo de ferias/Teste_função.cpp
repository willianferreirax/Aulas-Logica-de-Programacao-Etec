#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void maioridade(){
	int an,aa;
	system("CLS");
	puts("Você escolheu o programa maioridade");
	puts("Digite o ano de seu nascimento");
	scanf("%d",&an);
	puts("Digite o ano atual");
	scanf("%d",&aa);

	if(aa-an>=18){
		puts("Você atingiu a maioridade");
	}
	else{
		puts("Você não atingiu a maioridade");
	}
	return;
}
void calculadora(){
	int func,men_cal;
	float x,y,result;

    do{
        system("CLS");
        puts("Você escolheu o programa: Calculadora");
        puts("Qual função deseja realizar ?");
        puts("1 - Soma");
        puts("2 - Subtração");
        puts("3 - Multiplicação");
        puts("4 - Divisão");
        scanf("%d",&func);

        switch(func){
            case 1:
                system("CLS");
            puts("Digite o primeiro valor");
            scanf("%f",&x);
            puts("Digite o segundo valor");
            scanf("%f",&y);
            result=x+y;
            printf("O resultado de sua soma é %f\n",result);
            break;

            case 2:
                system("CLS");
            puts("Digite o primeiro valor");
            scanf("%f",&x);
            puts("Digite o segundo valor");
            scanf("%f",&y);
            result=x-y;
            printf("O resultado de sua subtração é %f\n",result);
            break;

            case 3:
                system("CLS");
            puts("Digite o primeiro valor");
            scanf("%f",&x);
            puts("Digite o segundo valor");
            scanf("%f",&y);
            result=x*y;
            printf("O resultado de sua multiplicação é %f\n",result);
            break;

            case 4:
                system("CLS");
            puts("Digite o primeiro valor");
            scanf("%f",&x);
            puts("Digite o segundo valor");
            scanf("%f",&y);
            result=x/y;
            printf("O resultado de sua divisão é %f\n",result);
            break;
        }
            puts("Deseja voltar ao menu da calculadora ? 1 - sim || 2 - não");
            scanf("%d",&men_cal);
    }while(men_cal==1);
        return;
}

void media(){
    float n1,n2,n3,n4,med,menu;
    do{
        system("CLS");
        puts("Você escolheu o programa : Media Bimestral");
        puts("Digite a primeira nota");
        scanf("%f",&n1);
        puts("Digite a segunda nota");
        scanf("%f",&n2);
        puts("Digite a terceira nota");
        scanf("%f",&n3);
        puts("Digite a quarta nota");
        scanf("%f",&n4);
        med=(n1+n2+n3+n4)/4;
        printf("A media do aluno foi %f\n",med);
        puts("Deseja calcular novamente ? 1 - Sim || 2 - Não");
        scanf("%f",&menu);
    }while(menu==1);
        return;

}
void bask(){
	float a,b,c,x1,x2,d;
	system("CLS");
	puts("Você escolheu o programa: Função 2° Grau");
	puts("Digite A");
	scanf("%f",&a);
	puts("Digite B");
	scanf("%f",&b);
	puts("Digite C");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("O resultado do seu X1 é %f e seu X2 é %f",x1,x2);
	return;
}

int main(){
	int ops,menu;
	setlocale(LC_ALL,"Portuguese");

do{
	system("CLS");
	puts("||Qual programa deseja utilizar||\n");
	puts("Maioridade - 1");
	puts("Calculadora - 2");
	puts("Media Bimestral(Escolar) - 3");
	puts("Função 2°Grau - 4");
	// necessita de manutenção na função 4
	scanf("%d",&ops);


	if(ops==1){
		maioridade();
		puts("Deseja voltar ao menu de opções ? se sim digite 1 se nao digite 2");
		scanf("%d",&menu);
	}

	if(ops==2){
		calculadora();
		puts("Deseja voltar ao menu de opções do programa principal ? \n1 - Sim || 2 - Não");
		scanf("%d",&menu);
	}
	if(ops==3){
		media();
		puts("Deseja voltar ao menu de opções do programa principal ? \n1 - Sim || 2 - Não");
		scanf("%d",&menu);
	}
	if(ops==4){
		bask();
		puts("Deseja voltar ao menu de opções do programa principal ? \n1 - Sim || 2 - Não");
		scanf("%d",&menu);
	}

}while(menu==1);

	system("PAUSE");
	return(0);

}
