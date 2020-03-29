#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Faça um programa que leia três notas de um aluno, calcule e escreva a média final deste aluno.
	Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da
	média final é:*/
	
	float n1, n2, n3, nf;
	
	printf("Digite a primeira nota:");
	scanf("%f",&n1);
	
	printf("\nDiigte a segunda nota:");
	scanf("%f",&n2);
	
	printf("\nDiigte a terceira nota:");
	scanf("%f",&n3);
	
	nf = ((n1*2)+(n2*3)+(n3*5))/10;
	
	printf("\n Media final: %.2f",nf);
	
	return 0;
}
