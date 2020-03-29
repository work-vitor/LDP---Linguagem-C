#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprimirCabecalho(){
	printf("******************************************\n");
	printf("************** Bem Vindo *******************\n");
	printf("**********************************************\n");
}

int calcularMulti(int n1, int n2){
	int resultado;
	
	resultado = n1*n2;
	
	return resultado;
	
}

int main(int argc, char *argv[]) {
	
	imprimirCabecalho();
	
	int n1, n2;
	
	printf("Informe um numero:");
	scanf("%d",&n1);
	
	printf("\nInforme um numero:");
	scanf("%d",&n2);
	
	calcularMulti(n1, n2);
	
	printf("O resultado: %d",calcularMulti(n1, n2));
	
	return 0;
}
