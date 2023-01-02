#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula025 - projeto - sistema de busca em linguagem c
*/


// prot�tipos das fun��es
int check(char *s);
void take_component();

// vari�veis globais
char databank[][40] = { // matriz contendo os componente e respectivas caracter�sticas
	"BC547",	"TBJ NPN 625mW",
	"BC557",	"TBJ PNP 625mW",
	"TIP41",	"TBJ NPN 65W",
	"TIP42",	"TBJ PNP 65W",
	"TIP122",	"TBJ NPN Darlington 100V 5A",
	"TIP127",	"TBJ PNP Darlington 100V 5A",
	"2N2222A", 	"TBJ NPN High Frequency 500mW",
	"2N7000", 	"MOSFET N Channel",
	"IRF3205", 	"MOSFET N Channel 55V 98A",
};

char input[80];			// matriz para entrada de dados - componente em pesquisa
char component[80];		// matriz passada como par�metro para a fun��o check
char *p;				// ponteiro

int main(){
	setlocale(LC_ALL, "Portuguese");

	int indice;
	char option;
	
	do{ // loop principal
	
		system("cls");
		printf("\n==== COMPONENT DATABANK ===\n");
		printf("\nInforme o componente que deseja pesquisar: ");
		gets(input);
		p = input;
		
		printf("\nCaracter�sticas do component pesquisado: ");
		take_component();
		
		do{ //loop para ler um componente por vez na matriz input e exibir suas caracter�sticas
			indice = check(component); // procura o �ndice do componente na databank
			
			// imprime as caracter�sticas do componente pesquisado
			if(indice != -1) printf("%s", databank[indice+1]);
			else printf("\nSem registro no banco de dados\n");
			
			take_component(); // pega pr�xima palavra
			
		}while(*component); // repete at� encontrar uma string nula
		
		//printf("\n");
		printf("\nPesquisar mais? s- sim | n - n�o : ");
		scanf("%c", &option);
		getchar();
		
	}while(option == 's' || option == 'S');
	printf("\nObrigado por usar nosso sistema!\n");


	printf("\n\n");
	//system("pause");
	return 0;
}


int check(char *s){
	int i;
	
	for(i = 0; *databank[i]; i++){ // varre a matriz databank
		if(!strcmp(databank[i], s)) break; // compara��o entre as matrizes databank e s
	}
	
	if(*databank[i]) return i;	// retorna o �ndice correspondente, se uma correspond�ncia existir
	else return -1;				// retorna -1 se n�o houver uma correspond�ncia
}


/*
	take_component l� o pr�ximo componente da matriz input.
	cada componente � considerado como sendo separado por um espa�o ou pelo terminador nulo.
	nenhuma outra pontua��o � permitida.
	o componente retornado ser� uma string de tamanho nulo quando o final da string input � encontrado.
*/

void take_component(){
	char *q;	// ponteiro auxiliar
	
	// recarrega o endere�o do componente toda vez que a fun��o � chamada
	q = component;
	
	// pega o pr�ximo componente
	while(*p && *p != ' '){ // shift no ender�o dos �ndices da matriz databank
		*q = *p;
		p++;
		q++;
	}
	
	if(*p == ' ') p++;
	*q = '\0'; // terminador nulo
}

