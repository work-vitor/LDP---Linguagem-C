#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=5;
	
	//P�s-incremento i++
	printf("Pos-increemento: %d",i++);
	printf("\ni: %d",i);
	
	i = 5;
	printf("\nReiniciado i: %d",i);
	
	//Pr�-increemento ++i;
	printf("\nPre-increemento: %d",++i);
	
	//Quebra de linha
	printf("\n");
	
	//Pos-decreemento i--
	printf("\nPos-increemento: %d",i--);
	printf("\ni: %d",i);
	
	//Pr�-decreemento --i;
	printf("\nPre-increemento: %d",--i);
	return 0;
}
