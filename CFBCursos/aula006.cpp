/***************************************
Projeto:
Autor: Marcelo moraes
Data: 31/12/22
Local: Sorocaba - SP
Descrição:
	
	aula006 - CFB Cursos - Curso C++
	Variáveis globais e locais, Operadores Matemáticos
	
	Variável com escopo global pode ser utilizada em qualquer função do projeto.
	Variável com escopo local só pode ser utilizada na função onde ela foi declarada.
	
	Operadores matemáticos:
	adição			+
	subtração 		-
	multiplicação 	*
	divisão 		/
	modulo 			%
	precedência: 	()	*	/	%	+	-
	


****************************************/

// --- inclusão das bibliotecas ---//
#include <iostream>
#include <locale>

// --- definição de parâmetros | constantes --- //
using namespace std;

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //
int n1, n2;

// --- programa principal ---//
int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "\n\n";

	// variáveis locais
	int n3, n4;
	int res1, res2;
	
	n1 = 20; // apesar de n1 e n2 não serem declaradas aqui, foram declaradas globalmente!
	n2 = 3;
	
	n3 = 4;
	n4 = 2;
	
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << "n3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl << "\n";
	
	cout << "n1 + n2 = " << n1 + n2 << endl;
	cout << "n1 - n2 = " <<  n1 - n2 << endl;
	cout << "n3 * n4 = " << n3 * n4 << endl;
	cout << "n3 / n4 = " << n3 / n4 << endl << "\n";
	
	res1 = (n1 + n3) / (n2 * n4);
	cout << "(n1 + n3) / (n2 * n4) = " << res1 << endl << "\n";
	
	res1 = n1 / n2;
	res2 = n1 % n2;
	cout << "n1 / n2 = " << res1 << endl;
	cout << "n1 % n2 = " << res2 << endl << "\n";
	
	
	
	
	
	
	
	
	
	cout << "\n\n";
	system("pause");
	return 0;
}

// --- funções auxiliares --- //
