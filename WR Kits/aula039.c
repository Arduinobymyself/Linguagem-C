#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
	aula039 - fun��es que retornam ponteiros
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
	if(p) printf("\n\n%s", p); // se correspond�ncia, imprime a frase a partir da primeira correspon�ncia
	else printf("\n\nNenhuma correspond�ncia");

	printf("\n\n");
	//system("pause");
	return 0;
}


char *findChar(char caractere, char *str){
	int counter = 0;
	while(caractere != str[counter] && str[counter] != '\0') counter++;
	
	if(str[counter]) return &str[counter]; // se correspond�ncia: retorna o ponteiro para a localiza��o
	else return (char *) '\0'; // sen�o, retorna um ponteiro nulo
}
