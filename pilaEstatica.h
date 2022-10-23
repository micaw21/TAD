#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 5

//Definicion de Tipos
typedef char tString [20];
typedef struct {
    tString descripcion;
    int tope;
}tPila;


//Prototipo de Funciones
void inicializarPila(tPila);
bool pilaLlena(tPila);
void cargarPila(tPila);
bool pilaVacia(tPila);
void visualizarPila(tPila);

//Implementacion
void inicializarPila(tPila pPila){
    pPila.tope = -1;
}
bool pilaLlena(tPila pPila) {
    return (pPila.tope == MAX - 1);
}

bool pilaVacia(tPila pPila) {
    return(pPila.tope == -1);
}

void cargarPila(tPila pPila) {
    if(pilaLlena(pPila)) {
        printf("Pila Llena!\n");
    } else {
        pPila.tope++;
        printf("Ingrese la descripcion: ");
        fflush(stdin);
        scanf("%s",&pPila.descripcion);
    }
}

void visualizarPila(tPila pPila){
    if(pilaVacia(pPila)){
        printf("No hay elementos para mostrar!\n");
    } else {
        int i;
        printf("***Elementos en pila!***\n");
        for(i=0;i>=pPila.tope;i++){
            printf("%s\n",pPila.descripcion[i]);
        }
    }
}

