/***************************************
Projeto:
Autor: Marcelo moraes
Data: 31/12/22
Local: Sorocaba - SP
Descrição:
	aula005 - CFBCursos - Curso C++
	Declaração multipla de variáveis, contantes e diretiva #define
	
	// declaração multipla de variáveis
	tipo_variável nome_var1, nome_var2, nome_var3, ... nome_varN;
	
	// podem também ser incicializadas
	tipo_variável nome_var1 = valor1, nome_var2 = valor2, nome_var3 = valor 3, ... nome_varN = valorN;
	
	// constantes - diretiva #define
	
	#define nome_alias valor_ou_comando
	
	Exemplos:
	#define PI 3.14159265359
	#define canal cout << "\nCanal ABMS Telecom\n"
	

****************************************/

// --- inclusão das bibliotecas ---//
#include <iostream>
#include <locale>

// --- definição de parâmetros | constantes --- //
#define PI 3.14159265359
#define canal cout<< "\n\nCanal ABMS Telecom\n\n"
using namespace std;

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //


// --- programa principal ---//
int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "\n\n";
	
	// variáveis locais
	int vidas = 0, tiros = 0, life = 5; // declaração multipla de variáveis e atribuições iniciais
	float raio = 2.3;
	double area = 2 * PI * raio;
	
	cout << PI << endl;
	cout << "area = " << area << endl;
	canal;
	
	
	
	
	
	
	
	cout << "\n\n";
	system("pause");
	return 0;
}

// --- funções auxiliares --- //
