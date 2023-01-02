#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula032 - projeto - relógio usando struct
*/

struct clock{
	int horas;
	int minutos;
	int segundos;
};

void delay();
void update(struct clock *t);
void display(struct clock *t);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	struct clock time;
	
	time.horas = 0;
	time.minutos = 0;
	time.segundos = 0;
	
	for(;;){
		update(&time);
		display(&time);
	}



	printf("\n\n");
	//system("pause");
	return 0;
}


void delay(){
	long t;
	for(t = 1; t <400000000; t++); // atraso no código
}

void update(struct clock *t){
	t -> segundos++;
	
	if(t -> segundos == 60){
		t -> segundos = 0;
		t -> minutos++;
	}
	
	if(t -> minutos == 60){
		t -> minutos = 0;
		t -> horas++;
	}
	
	if(t -> horas == 24){
		t -> horas = 0;
	}
	
	delay();
	system("cls");
	
}

void display(struct clock *t){
	printf("%d :", t -> horas);
	printf(" %d :", t -> minutos);
	printf(" %d", t -> segundos);
}
