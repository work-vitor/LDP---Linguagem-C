#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
	distribuidor e dos impostos. Supondo que o percentual do distribuidor seja de 28% e os impostos
	de 45%, escrever um programa para ler o custo de fábrica de um carro, calcular e escrever o custo
	final ao consumidor.*/
	
	float fabrica, PD = 28, IM = 45, por,  novo;
	
	printf("Digite o valor do carro:");
	scanf("%f",&fabrica);
	
	por = ((fabrica*PD)/100) + ((fabrica*IM)/100);
	novo = fabrica + por;
	
	printf("\nValor total do carro: R$%.2f",novo);
	return 0;
}
