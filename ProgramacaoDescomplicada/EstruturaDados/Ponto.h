typedef struct ponto Ponto;

Ponto* cria_pto(float x, float y);
void libera_pto(Ponto* p);
void acessa_pto(Ponto* p, float* x, float* y);
void atribui_pto(Ponto* p, float x, float y);
float distancia_pto(Ponto* p1, Ponto* p2);
