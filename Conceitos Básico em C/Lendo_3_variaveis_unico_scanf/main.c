#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Declarando Variaveis
	int n1;
	double n2;
	float n3;
	
	//Pegando dados via "input" no caso SCANF
	scanf("%d %lf %f",&n1,&n2,&n3);
	
	//Prinf variavel n1
	printf("%d",n1);
	
	//Prinf variavel n2
	printf("\n%lf",n2);
	
	//Prinf variavel n3
	printf("\n%f",n3);
	
	return 0;
}
