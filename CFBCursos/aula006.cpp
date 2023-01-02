/***************************************
Projeto:
Autor: Marcelo moraes
Data: 31/12/22
Local: Sorocaba - SP
Descri��o:
	
	aula006 - CFB Cursos - Curso C++
	Vari�veis globais e locais, Operadores Matem�ticos
	
	Vari�vel com escopo global pode ser utilizada em qualquer fun��o do projeto.
	Vari�vel com escopo local s� pode ser utilizada na fun��o onde ela foi declarada.
	
	Operadores matem�ticos:
	adi��o			+
	subtra��o 		-
	multiplica��o 	*
	divis�o 		/
	modulo 			%
	preced�ncia: 	()	*	/	%	+	-
	


****************************************/

// --- inclus�o das bibliotecas ---//
#include <iostream>
#include <locale>

// --- defini��o de par�metros | constantes --- //
using namespace std;

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //
int n1, n2;

// --- programa principal ---//
int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "\n\n";

	// vari�veis locais
	int n3, n4;
	int res1, res2;
	
	n1 = 20; // apesar de n1 e n2 n�o serem declaradas aqui, foram declaradas globalmente!
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

// --- fun��es auxiliares --- //
