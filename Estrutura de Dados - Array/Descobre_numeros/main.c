#include <stdio.h>
#include <stdlib.h>

#define TAM 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//veto do numeros
	int vet[TAM];
	
	//Numero localizado
	int n, i=0;
	
	//Quantidade de vezes num
	int vezes=0;
	
	//Lê os 10  numeros
	for(i;i<TAM;i++){
		
		printf("\nInforme o numero na posicao %d:",i+1);
		scanf("%d",&vet[i]);		
	}
	//Numero para descobrir
	printf("\nInforme o numero a ser descoberto:");
	scanf("%d",&n);
	
	//Buscar e armazenar a quantidade de vezes que aparece
	for(i=0;i<TAM;i++){
		if(vet[i]==n){
			vezes++;
		}
	}
	
	if(vezes>=1){
		printf("\nQuantidade de vezes que o numero %d apareceu no vetor: %d vezes",n,vezes);	
	}else{
		printf("\nO numero que voce digitou, nao foi digitado na leitura dos numeros!!");
	}
	
	
	
	
	
	
	return 0;
}
