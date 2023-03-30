
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	
	#ifndef __STDC_VERSION__
		printf("Versão: C89\n");
	#else
		#if(__STDC_VERSION__ == 199409L)
			printf("Versão: C94\n");
		#endif
		#if(__STDC_VERSION__ == 199901L)
			printf("Versão C99\n");
		#endif
	#endif
	
	
	printf("\n\n");
	system("pause");
	
	return 0;
}
