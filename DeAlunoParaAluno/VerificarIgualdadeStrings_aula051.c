/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU C�DIGO AQUI
	_Bool comparaStrings(char s1[], char s2[]);
	
	if(comparaStrings("casa", "casa")){
		printf("S�o iguais\n");
	} else{
		printf("S�o diferentes\n");
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
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




