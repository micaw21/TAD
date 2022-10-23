#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Definicion de Tipos
typedef char tString [25];

typedef struct nodo {
    int id;
    tString descripcion;
    struct nodo * siguiente;
}tLista;

//Prototipo de Funciones
void cargarDatos(tLista*);
bool listaVacia(tLista*);
void insertarPrimero(tLista*);
void insertarAdelante(tLista*);
void visualizarLista(tLista*);
void inicializarLista(tLista*);

//Implementacion
void inicializarLista(tLista * pLista){
    pLista = NULL;
}

bool listaVacia(tLista * pLista){
    return(pLista == NULL);
}

void cargarDatos(tLista * pLista){
    if(listaVacia(pLista)) {
        insertarPrimero(pLista);
    } else {
        insertarAdelante(pLista);
    }
}

void insertarPrimero(tLista * pLista){
    tLista * nodo;
    nodo = (tLista*)malloc(sizeof(tLista));
    printf("Ingrese un id: ");
    scanf("%d",&nodo->id);
    printf("Ingrese la descripcion: ");
    fflush(stdin);
    scanf("%s",&nodo->descripcion);
    nodo->siguiente = NULL;
    pLista = nodo;
    printf("Elemento insertado!\n");
}

void insertarAdelante(tLista * pLista){
    tLista * nodo;
    nodo = (tLista*)malloc(sizeof(tLista));
    printf("Ingrese un id: ");
    scanf("%d",&nodo->id);
    printf("Ingrese la descripcion: ");
    fflush(stdin);
    scanf("%s",&nodo->descripcion);
    nodo->siguiente = pLista;
    pLista = nodo;
    printf("Elemento insertado!\n");
}

void visualizarLista(tLista * pLista){
    printf("***Elementos en lista***\n");
    tLista * aux;
    aux = pLista;
    while(aux != NULL){
        printf("ID: %d - Descripcion: %s\n",aux->id,aux->descripcion);
        aux = aux->siguiente;
    }
}
