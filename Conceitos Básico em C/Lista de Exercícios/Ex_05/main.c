#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Fa�a um programa que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno.
	Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da
	m�dia final �:*/
	
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
