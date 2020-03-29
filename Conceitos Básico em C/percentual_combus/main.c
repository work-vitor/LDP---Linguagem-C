#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float E, G, P;
	
	printf("Digite o valor do etanol:");
	scanf("%f",&E);
	
	printf("\nDigite o valor da gasolina:");
	scanf("%f",&G);
	
	P = E/G;
	
	printf("Percentual do etanol em relacao a gasolina: %.2f",P);
	
	//Caso esqueça de declarar a variavel de calculo
	
	printf("\nPercentual do etanol em relacao a gasolina: %.2f",(E/G));
	
	return 0;
}
