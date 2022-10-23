#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "listaDinamica.h"

//Variables Globales
tLista * lista;

//Funcion Principal
int main() {
    int respuesta;
    do {
        cargarDatos(lista);
        printf("Desea ingresar otro? 1-Si 2-No\n");
        scanf("%d",&respuesta);
    } while(respuesta == 1);
    visualizarLista(lista);
    return 0;
}