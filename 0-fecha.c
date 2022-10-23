#include <stdio.h>
#include "FechaActual.h"

int main(){
    printf("Dia Actual: %d\n",conocerDiaActual());
    printf("Mes Actual: %d\n",conocerMesActual());
    printf("A%co Actual: %d\n",164,conocerAnioActual());
    mostrarFechaActual();
    return 0;
}