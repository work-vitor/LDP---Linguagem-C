#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mat[LIN][COL], i, j, cont = 0;
	
	for(i=0;i<LIN;i++){//Linha
		
		for(j=0;j<COL; j++){//Colunas
			mat[i][j] = cont;
			cont++;
			
			printf("\nMatriz[%d][%d] = %d",i,j,mat[i][j]);
		}
		printf("\n-------------------\n");
	}
	return 0;
}
