#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Responsavel por alimentar o rand de forma diferente
	
	srand((unsigned)time(NULL));
	
	//Variacel que recebe o resto da divisao do numero por 3 (valor aleatorio enter 0 e 2)
	int aleatorio = rand() % 3;
	
	//Variavel que recebe o resto da divisao do numero por 5 (valor aleatorio enter 1 e 5)
	
	int aleatorio2 = (rand() % 5)+1;
	
	//imprime o valor
	printf("%d", aleatorio);
	printf("\n%d", aleatorio2);
	
	return 0;
}
