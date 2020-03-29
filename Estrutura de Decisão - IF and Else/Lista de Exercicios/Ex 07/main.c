#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[61];
	int quanti;
	float preco, vt, desc;
	
	printf("Digite o nome do produto:");
	scanf("%s",&nome);
	
	printf("\nDigite a quantidade:");
	scanf("%d",&quanti);
	
	printf("\nDigite o preco unitario:");
	scanf("%f",&preco);
	
	if(quanti <= 5){
		vt = preco*quanti;
		desc = (vt*2)/100;
		vt = vt-desc;
		printf("\nVoce ganhou um desconto de 2 porcento!");
	}
	if(quanti > 5 && quanti <= 10){
		vt = preco*quanti;
		desc = (vt*3)/100;
		vt = vt-desc;
		printf("\nVoce ganhou um desconto de 3 porcento!");
	}
	if(quanti > 10){
		vt = preco*quanti;
		desc = (vt*5)/100;
		vt = vt-desc;
		printf("\nVoce ganhou um desconto de 5 porcento!");
	}
	printf("\nValor total da compra: R$%.2f.",vt);
	return 0;
}
