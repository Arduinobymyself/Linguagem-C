#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct datahora{
	int ano __attribute__((packed));
	int mes __attribute__((packed));
	int dia __attribute__((packed));
	int hora __attribute__((packed));
	int minuto __attribute__((packed));
	int segundo __attribute__((packed));
} datahora_t;

typedef struct registro{
	int numero __attribute__((packed));
	datahora_t datahora __attribute__((packed));
	int leitura __attribute__((packed));
} registro_t;

typedef struct resumo{
	int max __attribute__((packed));
	int min __attribute__((packed));
	float med __attribute__((packed));
	float rms __attribute__((packed));
} resumo_t;
