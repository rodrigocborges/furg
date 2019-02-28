typedef struct {
  int x;
  int y;
} Ponto;

Ponto* cria (float x, float y);
void libera (Ponto* p);
void acessa (Ponto* p, float* x, float* y);
void atribui (Ponto* p, float x, float y);
float distancia (Ponto* p1, Ponto* p2);
float scale(Ponto* p, float factor);
