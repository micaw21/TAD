#include <stdio.h>
#include <time.h>

//Prototipo de Funciones
int conocerDiaActual();
int conocerMesActual();
int conocerAnioActual();
void mostrarFechaActual();

//Implementacion
int conocerDiaActual(){
    time_t tiempo = time(NULL);
    struct tm * fecha = localtime(&tiempo); //localtime tiempo local de la maquina
    return fecha->tm_mday;
}

int conocerMesActual() {
    time_t tiempo = time(NULL);
    struct tm * fecha = localtime(&tiempo);
    return fecha->tm_mon + 1;
}

int conocerAnioActual() {
    time_t tiempo = time(NULL);
    struct tm * fecha = localtime(&tiempo);
    return fecha->tm_year + 1900;
}

void mostrarFechaActual() {
    time_t tiempo = time(NULL);
    struct tm * fecha = localtime(&tiempo);
    printf("%d / %d / %d\n",fecha->tm_mday,fecha->tm_mon + 1,fecha->tm_year + 1900);
}