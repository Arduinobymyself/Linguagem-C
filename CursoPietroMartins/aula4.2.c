#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 4.2 - dominando os comandos if - else
	
	if(condição){
		bloco de comandos se condição verdadeira;
	} else {
		bloco de comandos se condição falsa;
	}
	
	não existe else sem if
	else vem sempre depois do if
	um else para cada if
	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	float m;
	printf("\nInsira a nota do aluno: ");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("\nAprovado(a)!");
	} else {
		printf("\nReprovado(a)!");		
	}
	




	printf("\n\n");
	//system("pause");
	return 0;
}
