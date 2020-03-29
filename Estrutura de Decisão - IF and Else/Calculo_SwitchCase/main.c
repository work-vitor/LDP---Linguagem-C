#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor,vf;
	char op;
	
	
	printf("Valor da compra:");
	scanf("%f",&valor);
	
	printf("\nD-Dinheiro\nC-Credito\nd-Debito\n");
	scanf("%s",&op);
	
	switch(op){
		case 'D':
			vf = valor-(valor*0.1);
			break;
		case 'C':
			vf = valor;
			break;
		case 'd':
			vf = valor-(valor*0.05);
			break;
		default:
			printf("\nInforme um opcao correta!");
	}
	
	printf("\nValor final: %.2f",vf);
	
	return 0;
}
