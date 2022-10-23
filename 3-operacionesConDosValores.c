#include <stdio.h>
#include "operacionesConDosValores.h"

//Prototipo de Funciones
void menu();
void ingresarNumeros();
void menuOpciones(int);
void visualizarMayor();
void visualizarMenor();
void sonIguales();
void visualizarIntercambio();

//Variables Globales
int numero = 0;
int numero2 = 0;

//Funcion Principal
int main() {
    menu();
    return 0;
}

//Implementacion
void menu() {
    int respuesta = 0;
    printf("Elija una opcion\n");
    printf("1 - Calcular el mayor valor\n");
    printf("2 - Calcular el menor valor\n");
    printf("3 - Determinar si son valores iguales\n");
    printf("4 - Intercambiar valores\n");
    printf("5 - Salir: ");
    scanf("%d",&respuesta);
    menuOpciones(respuesta);
}

void menuOpciones(int pRespuesta) {
    switch(pRespuesta) {
        case 1:
            ingresarNumeros();
            visualizarMayor();
            menu();
        break;
        case 2:
            ingresarNumeros();
            visualizarMenor();
            menu();
        break;
        case 3:
            ingresarNumeros();
            sonIguales();
            menu();
        break;
        case 4:
            ingresarNumeros();
            visualizarIntercambio();
            menu();
        break;
        default:
            printf("Programa finalizado!\n");
        break;
    }
}

void ingresarNumeros() {
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero);
    printf("Ingrese otro numero entero: ");
    scanf("%d",&numero2);
}

void visualizarMayor() {
    int mayor = mayorValor(numero,numero2);
    printf("El mayor valor entre %d y %d es %d\n",numero,numero2,mayor);
}

void visualizarMenor() {
    int menor = menorValor(numero,numero2);
    printf("El menor valor entre %d y %d es %d\n",numero,numero2,menor);
}

void sonIguales() {
    if(valoresIguales(numero,numero2)) {
        printf("%d y %d son iguales!\n",numero,numero2);
    } else {
        printf("%d y %d no son iguales!\n",numero,numero2);
    }
}

void visualizarIntercambio() {
    printf("Antes de intercambiar:\nx = %d\n",numero);
    printf("y = %d\n",numero2);
    intercambiar(&numero, &numero2);
    printf("Despues de intercambiar:\nx = %d\n",numero);
    printf("y = %d\n",numero2);
    
}