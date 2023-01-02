#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula034 - ENUM - enumerações
	
	enum nome{
		item1,
		item2,
		item3,
		.
		.
		.
		itemN,
	};
	
	cada item tem corresponde um número interio
	item1 = 0
	item2 = 1
	item3 = 2
	...
	itemN = N-1
	
	pode ser modificado inicializndo um item antes
*/

enum enumeracao1{
	item1 =1,
	item2,
	item3 = 150,
	item4,
	item5,
	item6 = 1000,
};

enum componentes{
	transistor, resistor, capacitor, diodo, indutor, mcu,
};

char comp[][20] = {
	"Q",
	"R",
	"C",
	"D",
	"L",
	"CI",
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	printf("%d\n", item1); // 1
	printf("%d\n", item2); // 2
	printf("%d\n", item3); // 150
	printf("%d\n", item4); // 151
	printf("%d\n", item5); // 152
	printf("%d\n", item6); // 1000
	printf("\n\n");
	
	enum componentes referencia;
	int i;
	
	
	for(referencia = transistor; referencia <= mcu; referencia++){
		printf("%s\n", comp[referencia]);
	}
	
	
	


	printf("\n\n");
	//system("pause");
	return 0;
}
