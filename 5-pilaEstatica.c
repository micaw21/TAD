#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "pilaEstatica.h"

//Variables Globales
tPila pila[MAX];

//Prototipo de Funciones
void menu();
void menuOpciones(int);

//Funcion Principal
int main() {
    menu();
    return 0;
}

//Implementacion
void menu() {
    int respuesta = 0;
    printf("Elija una opcion\n");
    printf("1-Cargar pila\n");
    printf("2-Visualizar elementos en pila\n");
    printf("3-Salir: ");
    scanf("%d",&respuesta);
    menuOpciones(respuesta);
}

void menuOpciones(int pRespuesta) {
    switch(pRespuesta){
        case 1:
            cargarPila(pila);
            menu();
        break;
        case 2:
            visualizarPila(pila);
            menu();
        break;
        default:
            printf("Programa finalizado!\n");
        break;
    }
}