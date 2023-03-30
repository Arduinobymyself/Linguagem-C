/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU CÓDIGO AQUI
	_Bool comparaStrings(char s1[], char s2[]);
	
	if(comparaStrings("casa", "casa")){
		printf("São iguais\n");
	} else{
		printf("São diferentes\n");
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
_Bool comparaStrings(char s1[], char s2[]){
	int i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		i++;
	}		
	if(s1[i] == '\0' && s2[i] == '\0'){
		return 1;
	} else{
		return 0;
	}
}




