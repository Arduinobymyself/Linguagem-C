#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	inversão de string
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	/*
	// método 1:
	char str[20] = "Linguagem C";
	char str_temp[20];
	int i, j = 0;
	for(i = strlen(str) - 1; i >= 0; i--){
		str_temp[j] = str[i];
		j++;
	}
	str_temp[j] = '\0';
	printf("String original = %s\n", str);
	printf("String Invertida = %s\n", str_temp);
	*/
	
	// método 2:
	char str[20] = "Linguagem C";
	char c;
	int i, tam = strlen(str);
	printf("String original = %s\n", str);
	for(i = 0; i < tam / 2; i++){
		c = str[i];
		str[i] = str[tam - 1 - i];
		str[tam - 1- i] = c;
	}
	printf("String invertida = %s\n", str);



	printf("\n\n");
	//system("pause");
	return 0;
}
