#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 4.1.1 - opera��es l�gicas - disjun��o, consjun��o e nega��o
	conjun��o && e l�gico
	disjun��o || ou L�gico
	nega��o ! not L�gico
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	float m;
	printf("\nInsira a nota do aluno: ");
	scanf("%f", &m);
	
	if(m >= 4.0 && m < 7.0){
		printf("\nTem direito a exame!\n");
	}



	printf("\n\n");
	//system("pause");
	return 0;
}
