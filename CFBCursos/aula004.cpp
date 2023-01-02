/*
	aula004 - CFB Cursos - C++
	Vari�veis
	
	tipo nome_da_variavel; // declara��o
	
	'=' atribui��o de valores �s vari�veis
	
	tipo nome_da_variavel = atribui��o_valor; // declara��o e atribui��o
	
	nome_da_variavel = atribui��o_valor; // somente atribui��o ap�s declara��o
	
*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vidas;			// vari�vel de inteiros 
	char letra;			// vair�vel para caracteres alpha num�ricos 'a', 'b', '1' ...
	char letras[5];		// vari�vel para sequencia de caracteres "aeiou"
	double decimal;		// vari�vel para n�meros com casa decimal (ponto flutuante) de alta precis�o
	float decimal_2;	//	precis�o menor do que double
	bool vivo; 			// true = verdadeiro | 1 ou false = falso | 0
	string nome;		//	vari�vel para textos | sequencia de caracteres "Marcelo", "Hello World!" ...
	string sobrenome;
	
	nome = "Marcelo";
	sobrenome = "Moraes";
	
	cout << "\n" << nome << " " << sobrenome << endl; 
	
	cout << "\nDigite o n�mero de vidas ";
	cin >> vidas;
	cout << "\nVoc� tem " << vidas << " vidas\n" << endl;
	
	system("pause");
	return 0;
}
