#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	contando caracteres
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	
	/*
	// maneira mais intuitiva
	char str[20] = "Linguagem C";
	int i, j, total = 0;
	int tam = strlen(str);
	for(i = 0; i < tam; i++){
		if(str[i] == 'a' || 
		   str[i] == 'e' || 
		   str[i] == 'i' || 
		   str[i] == 'o' || 
		   str[i] == 'u'){
			total++;
		}// mas e os caracteres maiúsculos... ?
	}
	printf("Nro de vogais = %d\n", total);
	*/
	
	
	// outra maneira... mais elegante
	char str[20] = "Linguagem C";
	char vogais[11] = "aeiouAEIOU"; // declara um vetor com as strings de controle/comparação
	int i, j, total = 0;
	int tam1 = strlen(str);
	int tam2 = strlen(vogais);
	for(i = 0; i < tam1; i++){
		for(j = 0; j < tam2; j++){
			if(str[i] == vogais[j]){ // compara letra a letra da string original coma s string de comparção
				total++;
				break;
			}
		}
	}
	printf("\nNro de vogais = %d", total);

	



	printf("\n\n");
	//system("pause");
	return 0;
}
