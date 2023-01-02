#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
	aula039 - funções que retornam ponteiros
*/

char *findChar(char caractere, char *str);



int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	char frase[80];
	char chr, *p;

	printf("\nEntre com uma frase: ");
	gets(frase);
	printf("\nEntre com um caractere: ");
	chr = getche();
	p = findChar(chr, frase);
	if(p) printf("\n\n%s", p); // se correspondência, imprime a frase a partir da primeira corresponência
	else printf("\n\nNenhuma correspondência");

	printf("\n\n");
	//system("pause");
	return 0;
}


char *findChar(char caractere, char *str){
	int counter = 0;
	while(caractere != str[counter] && str[counter] != '\0') counter++;
	
	if(str[counter]) return &str[counter]; // se correspondência: retorna o ponteiro para a localização
	else return (char *) '\0'; // senão, retorna um ponteiro nulo
}
