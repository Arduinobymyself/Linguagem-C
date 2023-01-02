/***************************************
Projeto:
Autor: Marcelo moraes
Data: 31/12/22
Local: Sorocaba - SP
Descri��o:
	aula005 - CFBCursos - Curso C++
	Declara��o multipla de vari�veis, contantes e diretiva #define
	
	// declara��o multipla de vari�veis
	tipo_vari�vel nome_var1, nome_var2, nome_var3, ... nome_varN;
	
	// podem tamb�m ser incicializadas
	tipo_vari�vel nome_var1 = valor1, nome_var2 = valor2, nome_var3 = valor 3, ... nome_varN = valorN;
	
	// constantes - diretiva #define
	
	#define nome_alias valor_ou_comando
	
	Exemplos:
	#define PI 3.14159265359
	#define canal cout << "\nCanal ABMS Telecom\n"
	

****************************************/

// --- inclus�o das bibliotecas ---//
#include <iostream>
#include <locale>

// --- defini��o de par�metros | constantes --- //
#define PI 3.14159265359
#define canal cout<< "\n\nCanal ABMS Telecom\n\n"
using namespace std;

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //


// --- programa principal ---//
int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "\n\n";
	
	// vari�veis locais
	int vidas = 0, tiros = 0, life = 5; // declara��o multipla de vari�veis e atribui��es iniciais
	float raio = 2.3;
	double area = 2 * PI * raio;
	
	cout << PI << endl;
	cout << "area = " << area << endl;
	canal;
	
	
	
	
	
	
	
	cout << "\n\n";
	system("pause");
	return 0;
}

// --- fun��es auxiliares --- //
