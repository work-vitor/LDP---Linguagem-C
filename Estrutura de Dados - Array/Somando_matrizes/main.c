#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3
#define TAM 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Contadores
	int i,j,cont=0,N;
	
	//Mtriz
	int mat[LIN][COL] = {{1,2,3},{4,5,6},{7,8,9}};//Atribuindo valores a todas as celulas da matriz
	
	//Soma Diagonal
	int dp=0;
	
	for(i=0; i<LIN; i++){//Linhas
		
		for(j=0; j<COL; j++){//Colunas
			
			printf("[%d]--",mat[i][j]);
			
		}
		
		printf("\n--------------\n");
		
	}  
	
	printf("\n\n\n\n----------------------Diagonal Principal--------------------------\n\n\n");
	
	for(i=0;i<COL; i++){//Linhas
		for(j=0; j<COL; j++){//Colunas
			if(i==j){
				dp = dp+mat[i][j];
			}
		}
	}
	
	printf("\nSoma da diagonal principal: %d", dp);
	
	return 0;
}
