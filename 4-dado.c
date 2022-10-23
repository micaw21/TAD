#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dado.h"

//Variables Globales

//Prototipo de Funciones
void visualizarCara();

//Funcion Principal
int main() {
    int respuesta;
    do{
        inicializarDado();
        lanzarDado();
        visualizarCara();
        printf("Desea lanzar de nuevo? 1-Si, 2-No ");
        scanf("%d",&respuesta);
    } while(respuesta == 1);
    return 0;
}

//Implementacion
void visualizarCara() {
    int cara = valorActual();
    printf("El valor de la cara es de: %d\n",cara);
}
