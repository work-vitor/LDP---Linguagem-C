#include <stdio.h>
#include <stdlib.h>

#define TAM 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Contador
	int i;
	
	//Vetor
	int vet[TAM];
	
 	for(i=0;i<TAM; i++){
      printf("Informe o %d valor:",i+1);
	  scanf("%d",&vet[i]);
	 }
	 
	 printf("\n-----------Numeros Lidos-----------------\n");
	 for(i=0; i<TAM; i++){
	 	printf("%d;",vet[i]);
	 }
	 
	 printf("\n----------Substituicoes-------------------\n");
	 for(i=0; i<TAM; i++){
	 	if(vet[i]%2==0){
	 		vet[i]=0;//Numero par
		 }else{
		 	vet[i]=1;//Numero Impar
		 }
	 }
	 
	 printf("\n-----------Numeros Substituidos-----------------\n");
	 for(i=0; i<TAM; i++){
	 	printf("%d;",vet[i]);
	 }
	return 0;
}
