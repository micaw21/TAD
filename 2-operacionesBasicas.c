#include <stdio.h>
#include "operacionesBasicas.h"

//Variables Globales
float numero1;
float numero2;

//Prototipo de Funciones
void ingresarNumeros();
void menu();
void menuOpciones(int);
void mostrarSuma();
void mostrarResta();
void mostrarProducto();
void mostrarDivision();

int main() {
    menu();
    return 0;
}

//Implementacion
void menu(){
    int respuesta = 0;
    printf("Elija una opcion\n");
    printf("1 - Suma\n");
    printf("2 - Resta\n");
    printf("3 - Multiplicacion\n");
    printf("4 - Division\n");
    printf("5 - Salir: ");
    scanf("%d",&respuesta);
    menuOpciones(respuesta);
}

void menuOpciones(int pRespuesta){
    switch(pRespuesta){
        case 1:
            ingresarNumeros();
            mostrarSuma();
            menu();
        break;
        case 2: 
            ingresarNumeros();
            mostrarResta();
            menu();
        break;
        case 3: 
            ingresarNumeros();
            mostrarProducto();
            menu();
        break;
        case 4:
            do {
                ingresarNumeros();
                if(numero2 == 0){
                    printf("El dividendo no puede ser 0!\n");
                }
            } while (numero2 == 0);
            
            mostrarDivision();
            menu();
        break;
        default:
            printf("Programa finalizado!\n");
        break;
    }
}

void ingresarNumeros(){
    printf("Ingrese un numero real: ");
    scanf("%f",&numero1);
    printf("Ingrese otro numero real: ");
    scanf("%f",&numero2);
}

void mostrarSuma(){
    printf("%.2f + %.2f = %.2f\n",numero1,numero2,suma(numero1,numero2));
}

void mostrarResta(){
    printf("%.2f - %.2f = %.2f\n",numero1,numero2,resta(numero1,numero2));
}

void mostrarProducto(){
    printf("%.2f x %.2f = %.2f\n",numero1,numero2,multiplicacion(numero1,numero2));
}

void mostrarDivision(){
    printf("%.2f / %.2f = %.2f\n",numero1,numero2,division(numero1,numero2));
}

