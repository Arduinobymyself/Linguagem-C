#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 4.1.1 - operações lógicas - disjunção, consjunção e negação
	conjunção && e lógico
	disjunção || ou Lógico
	negação ! not Lógico
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
