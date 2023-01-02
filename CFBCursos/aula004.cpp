/*
	aula004 - CFB Cursos - C++
	Variáveis
	
	tipo nome_da_variavel; // declaração
	
	'=' atribuição de valores às variáveis
	
	tipo nome_da_variavel = atribuição_valor; // declaração e atribuição
	
	nome_da_variavel = atribuição_valor; // somente atribuição após declaração
	
*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vidas;			// variável de inteiros 
	char letra;			// vairável para caracteres alpha numéricos 'a', 'b', '1' ...
	char letras[5];		// variável para sequencia de caracteres "aeiou"
	double decimal;		// variável para números com casa decimal (ponto flutuante) de alta precisão
	float decimal_2;	//	precisão menor do que double
	bool vivo; 			// true = verdadeiro | 1 ou false = falso | 0
	string nome;		//	variável para textos | sequencia de caracteres "Marcelo", "Hello World!" ...
	string sobrenome;
	
	nome = "Marcelo";
	sobrenome = "Moraes";
	
	cout << "\n" << nome << " " << sobrenome << endl; 
	
	cout << "\nDigite o número de vidas ";
	cin >> vidas;
	cout << "\nVocê tem " << vidas << " vidas\n" << endl;
	
	system("pause");
	return 0;
}
