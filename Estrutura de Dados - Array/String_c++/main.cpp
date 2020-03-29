#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//Definindo uma string
	std::string palavra;
	
	//Imprimindo na tela
	cout << "Digite uma palvra:";
	
	//Lendo uma string
	cin >> palavra;
	
	//Imprimindo a variavel 
	cout << palavra;
	
	//Imprimindo a variavel concatenada
	cout << "\nA palavra eh: " << palavra;
	
	return 0;
}
