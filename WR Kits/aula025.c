#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula025 - projeto - sistema de busca em linguagem c
*/


// protótipos das funções
int check(char *s);
void take_component();

// variáveis globais
char databank[][40] = { // matriz contendo os componente e respectivas características
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
char component[80];		// matriz passada como parâmetro para a função check
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
		
		printf("\nCaracterísticas do component pesquisado: ");
		take_component();
		
		do{ //loop para ler um componente por vez na matriz input e exibir suas características
			indice = check(component); // procura o índice do componente na databank
			
			// imprime as características do componente pesquisado
			if(indice != -1) printf("%s", databank[indice+1]);
			else printf("\nSem registro no banco de dados\n");
			
			take_component(); // pega próxima palavra
			
		}while(*component); // repete até encontrar uma string nula
		
		//printf("\n");
		printf("\nPesquisar mais? s- sim | n - não : ");
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
		if(!strcmp(databank[i], s)) break; // comparação entre as matrizes databank e s
	}
	
	if(*databank[i]) return i;	// retorna o índice correspondente, se uma correspondência existir
	else return -1;				// retorna -1 se não houver uma correspondência
}


/*
	take_component lê o próximo componente da matriz input.
	cada componente é considerado como sendo separado por um espaço ou pelo terminador nulo.
	nenhuma outra pontuação é permitida.
	o componente retornado será uma string de tamanho nulo quando o final da string input é encontrado.
*/

void take_component(){
	char *q;	// ponteiro auxiliar
	
	// recarrega o endereço do componente toda vez que a função é chamada
	q = component;
	
	// pega o próximo componente
	while(*p && *p != ' '){ // shift no enderço dos índices da matriz databank
		*q = *p;
		p++;
		q++;
	}
	
	if(*p == ' ') p++;
	*q = '\0'; // terminador nulo
}

