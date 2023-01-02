#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula4.1 - dominando o comando if()
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	float m;
	printf("\nInsira a nota do aluno: ");
	scanf("%f", &m);
	
	// comando if simples
	if(m >= 7.0){
		printf("\n\nAluno(a) aprovado(a)!");
	}
	
	//comando if - else
	if(m >= 7.0){
		printf("\n\nAluno(a) Aprovado(a)!");
	} else{
		printf("\n\nAluno(a) Reprovado(a)!");		
	}
	
	// comando if - else - if
	if(m >= 7.0){
		printf("\n\nAluno(a) Aprovado(a)!");
	} else if( m >= 5.0){
		printf("\n\nAluno(a) de Exame!");		
	} else {
		printf("\n\nAluno(a) Reprovado(a)!");				
	}

	// if aninhado
	if(m >= 7.0){
		printf("\n\nAluno(a) Aprovado(a)!");
		if( m >= 5.0){
			printf("\n\nAluno(a) de Exame!");		
		} else {
			printf("\n\nAluno(a) Reprovado(a)!");				
		}
	}
	
	
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}
