#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159265

/*
 aula038 - funções que retornam não inteiros
 	float nome(parametros...);
 	double nome(parametros...);
*/

float teste(float numero);
float area_circulo(float raio);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	printf("\n%.2f\n", teste(3.14159265));
	
	float raio;
	printf("\nInforme o valor do raio: ");
	scanf("%f", &raio);
	getchar();
	printf("\nArea = %.2f", area_circulo(raio));


	printf("\n\n");
	//system("pause");
	return 0;
}




float teste(float numero){
	float retornar;
	retornar = numero;
	return retornar;
}

float area_circulo(float raio){
	return PI*pow(raio, 2);
}
