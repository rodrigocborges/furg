#include <stdlib.h>

int pow(int v, int p){
    for(int i = 0; i < p; i++){
        v*=v;
    }
    return v;
} // verificar

Ponto* cria (float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if(p == NULL){
        printf("Memoria insuficiente! \n");
        exit(1);
    }

    p->x = x;
    p->y = y;
    return p;
}

void libera (Ponto* p){
    free(p);
}

void acessa (Ponto* p, float* x, float* y){

}

void atribui (Ponto* p, float x, float y){

}

float distancia (Ponto* p1, Ponto* p2){

}

float scale(Ponto* p, float factor) {

}

