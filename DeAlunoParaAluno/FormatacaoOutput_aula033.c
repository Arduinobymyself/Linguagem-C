#include <stdio.h>

int main(){
	
	int intVar1 = 99999999;
	int intVar2 = 10;
	double doubleVar = 123.0123456789;
	
	printf("variavel inteira(%%d) = %d\n", intVar1); // inteiro
	printf("variavel inteira(%%i) = %i\n", intVar1); // inteiro
	printf("variavel inteira(%%x) = %x\n", intVar1); // converte para hexadecimal
	printf("variavel inteira(%%0) = %o\n", intVar1); // converte para octal
	printf("\n");
	
	printf("variavel inteira(%%d) = %7d\n", intVar2); // inteiro
	printf("variavel inteira(%%i) = %i\n", intVar2); // inteiro
	printf("variavel inteira(%%x) = %x\n", intVar2); // converte para hexadecimal
	printf("variavel inteira(%%0) = %o\n", intVar2); // converte para octal
	printf("\n");
	
	printf("variavel inteira(%%f) = %f\n", doubleVar); // float ou double precisão 6 casas com arredondamento
	printf("variavel inteira(%%e) = %e\n", doubleVar); // notação cientifica precisão 6 com arredondamento
	printf("variavel inteira(%%g) = %g\n", doubleVar); // truncado, precisão 3 com arredondamento
	printf("variavel inteira(%%a) = %a\n", doubleVar); // hexadecimal
	printf("\n");
	
	return 0;
	system("pause");
	
}
