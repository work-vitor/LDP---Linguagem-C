#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[5], i=0;
	
	vet[0] = 10;
	vet[1] = 1;
	vet[2] = -3;
	vet[3] = 5; 
	vet[4] = 0; 
	
	//printf("Vet[0] = %d",vet[0]);
	
	for(i;i<5;i++){
		printf("\nVet[%d] = %d",i,vet[i]);
	}
	return 0;
}
