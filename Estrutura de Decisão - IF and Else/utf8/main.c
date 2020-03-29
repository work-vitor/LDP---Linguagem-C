#include <stdio.h>
#include <stdlib.h>
//biblioteca para UTF-8
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Adicionei essa linha
    setlocale(LC_ALL, "Portuguese_Brasil");
    
    printf("Teste João Média Memória!!!!!!");
	return 0;
}
