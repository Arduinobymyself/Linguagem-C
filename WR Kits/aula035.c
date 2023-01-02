#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula035 - TYPEDEF
	atribuição de sinônimos a tipo de dados
	
	typedef int meu_inteiro;
	typedef char meu_char;
	
*/

struct componentes{
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
};

typedef struct componentes new_comp;



int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// redefinindo tipos...
	typedef int meu_inteiro;
	typedef char meu_char;
	typedef float meu_float;
	// criando variáveis com os novos tipos
	meu_inteiro a = 1, b = 2, c = 3;
	meu_char d = 'A', e = 'B', f = 'C';
	meu_float g = 4.56, h = 5.67, i = 7.89;
	// imprimindo esses valores
	printf("%d, %d, %d\n", a, b, c);
	printf("%c, %c, %c\n", d, e, f);
	printf("%.1f, %.2f, %.3f\n", g, h, i);
	
	// declarando um novo tipo estruct
	new_comp teste1; // teste1 é do tipo struct componentes
	new_comp teste2; // teste2 é do tipo struct componentes
	new_comp teste3; // teste3 é do tipo struct componentes

	teste1.valor = 120; // atribuindo valor ao campo valor
	printf("\n%d", teste1.valor); // imprimindo o campo valor

	printf("\n\n");
	//system("pause");
	return 0;
}
