#include <stdio.h>
#include "operacionesRectangulo.h"

float base;
float altura;

void menu();
void opcionesMenu(int);
void ingresarDatos();
void perimetro();
void area();

int main() {
    menu();
    return 0;
}

void menu(){
    int respuesta = 0;
    printf("Elija una opcion\n");
    printf("1 - Calcular perimetro de un rectangulo\n");
    printf("2 - Calcular area de rectangulo\n");
    printf("3 - Salir: ");
    scanf("%d",&respuesta);
    opcionesMenu(respuesta);
}

void opcionesMenu(int pRespuesta){
    switch(pRespuesta){
        case 1:
            ingresarDatos();
            perimetro();
            menu();
        break;
        case 2:
            ingresarDatos();
            area();
            menu();
        break;
        default:
            printf("Programa finalizado!\n");
        break;
    }
}

void ingresarDatos(){
    printf("Ingrese la base: ");
    scanf("%f",&base);
    printf("Ingrese la altura: ");
    scanf("%f",&altura);
}

void perimetro() {
    printf("El perimetro de base %.2f y altura %.2f es %.2f\n",base,altura,calcularPerimetro(base, altura));
}

void area() {
    printf("El area de base %.2f y altura %.2f es %.2f\n",base,altura,calcularArea(base, altura));
}