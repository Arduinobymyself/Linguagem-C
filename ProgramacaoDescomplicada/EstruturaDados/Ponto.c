#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

struct ponto{
	float x;
	float y;
};

Ponto* cria_pto(float x, float y){
	Ponto* p = (Ponto*)malloc(sizeof(Ponto));
	if(p != NULL){
		p->x = x;
		p->y = y;
	}
	return p;
}

void libera_pto(Ponto* p){
	free(p);
}

void acessa_pto(Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
}

void atribui_pto(Ponto* p, float x, float y){
	p->x = x;
	p->y = y;
}

float distancia_pto(Ponto* p1, Ponto* p2){
	float dx = p1->x - p2->x;
	float dy = p1->y - p2->y;
	return sqrt(dx*dx+dy*dy);
}



