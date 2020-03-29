#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int usu, senha, co = 1234, pass = 9999;
	
	printf("Digite seu codigo de usuario:");
	scanf("%d",&usu);
	
	if(usu == co){
		printf("\nDigite sua senha");
		scanf("%d",&senha);
		
		if(senha == pass){
			printf("\nBem Vindo ao sistema!");
		}
		else{
			printf("\nSenha incorreta!");
		}
	}else{
		printf("\nDados incorretos!");
	}
	return 0;
}
