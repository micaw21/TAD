#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Variables Globales
int vDado [6];
int cara = 0;

//Prototipo de Funciones
void inicializarDado();
void lanzarDado();
int valorActual();

//Implementacion
void inicializarDado() {
    int i;
    for(i=0;i<6;i++) {
        //printf("Ingrese valor para una cara del dado: ");
        //scanf("%d",&vDado[i]);
        vDado[i] = i + 1;
    }
}

void lanzarDado() {
    srand(time(NULL));
    cara = rand() % 6;
}

int valorActual() {
    int valor = vDado[cara];
    return valor;
}


