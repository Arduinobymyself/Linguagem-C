#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	String - total de vogais
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	char str[50];
	printf("Entre com uma frase: ");
	gets(str);

	// maneira mais intuitiva!
	//char str[20] = "Linguagem C";
	int i, vogal = 0, consoante = 0, espaco;
	int tam = strlen(str);
	for(i = 0; i < tam; i++){
		if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u'){
			vogal++;			
		} else if(str[i] == ' '){
			espaco++;
		} else {
			consoante++;
		}
	}
	
	printf("\nString original: %s", str);
	printf("\nNro de vogais = %d", vogal);
	printf("\nNro de espaços = %d", espaco);
	printf("\nNro de consoantes = %d", consoante);

	
	
	/*
	// outra maneira... mais elegante
	//char str[20] = "Linguagem C";
	char vogais[11] = "aeiouAEIOU"; // declara um vetor com as strings de comparação
	int i, j, total = 0, espacos = 0;
	int tam1 = strlen(str);
	int tam2 = strlen(vogais);
	for(i = 0; i < tam1; i++){
		for(j = 0; j < tam2; j++){
			if(str[i] == vogais[j]){ // compara letra a letra da string original coma s string de comparção
				total++;
				break;
			}
			if(str[i] == ' '){
				espacos++;
				break;
			}
		}
	}
	printf("\nString original: %s", str);
	printf("\nNro de vogais = %d", total);
	printf("\nNro de espaços = %d", espacos);
	printf("\nNro de consoantes = %d", tam1 - total - espacos);
	*/


	printf("\n\n");
	//system("pause");
	return 0;
}
