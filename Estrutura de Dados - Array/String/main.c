#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Variaveis
	char palavra[255];
	
	//Instrução
	printf("Digite uma palavra:");
	
	//Limpa o buffer
	setbuf(stdin, 0);
	
	//Lê a string
	fgets(palavra, 255, stdin);
	
	//Limpa as casas nao utilizadas
	palavra[strlen(palavra)-1] = '\0';
	
	//Imprime
	printf("%s",palavra);
	
	return 0;
}
