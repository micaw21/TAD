#include <math.h>
#include <stdio.h>

//Prototipo de Funciones
float calcularPerimetro(float, float);
float calcularArea(float, float);

//Implementacion
float calcularPerimetro(float pBase, float pAltura){
    return (pBase * 2 + pAltura * 2);
}

float calcularArea(float pBase, float pAltura){
    return(pBase * pAltura);
}