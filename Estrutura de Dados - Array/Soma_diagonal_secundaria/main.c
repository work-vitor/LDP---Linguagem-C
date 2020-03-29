#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Contadores
	int i,j,cont=0,N;
	
	//Mtriz
	int mat[LIN][COL] = {{1,2,3},{4,5,6},{10,8,20}};//Atribuindo valores a todas as celulas da matriz
	
	//Soma Diagonal
	int dp=0;
	
	for(i=0; i<LIN; i++){//Linhas
		
		for(j=0; j<COL; j++){//Colunas
			
			printf("[%d]--",mat[i][j]);
			
		}
		
		printf("\n--------------\n");
		
	}  
	
	printf("\n\n\n\n----------------------Diagonal Principal--------------------------\n\n\n");
	
	for(i=0;i<LIN; i++){//Linhas
		for(j=0; j<COL; j++){//Colunas
			if(i==j){
				dp = dp+mat[i][j];
			}
		}
	}
	
	printf("\nSoma da diagonal principal: %d", dp);
	
	
	printf("\n\n\n\n----------------------Diagonal Segundaria--------------------------\n\n\n");
	
	dp = 0;
	
	for(i=0; i<LIN; i++){//Linhas
		for(j=2; j>=0; j--){//Colunas
			if((i+j)==2){
				dp = dp+mat[i][j];
			}
		}
	}
	
	printf("\nSoma da diagonal principal: %d", dp);
	
	return 0;
}
