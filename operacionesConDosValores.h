#include <stdio.h>
#include <stdbool.h>

//Prototipo de Funciones
int mayorValor(int, int);
int menorValor(int, int);
bool valoresIguales(int, int);
void intercambiar(int*, int*);

//Implementacion
int mayorValor(int x, int y){
    if(x > y) {
        return x;
    } else {
        return y;
    }
}

int menorValor(int x, int y){
    if(x < y) {
        return x;
    } else {
        return y;
    }
}

bool valoresIguales(int x, int y){
    return (x == y);
}

void intercambiar(int * x, int * y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}
