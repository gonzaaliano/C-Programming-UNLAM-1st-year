// 2.1. Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo.
// RESUELTO.


#include <stdio.h>
#include <stdlib.h>

/*Programa Sueldo Ejercicio 2.1
 Unidad 2 Secuencial*/

int main()
{
    float horasTrabajadas, valorPorHora, sueldo; // DECLARACION 3 VARIABLES

    // INGRESO DEL USUARIO

    printf("Bienvenido al programa Sueldo\n");
    printf("Ingrese las horas trabajadas\n");
    scanf("%f", &horasTrabajadas);

    printf("Ingrese el valor por hora\n");
    scanf("%f", &valorPorHora);

    printf("Calculando sueldo...\n");

    // CALCULO DE SUELDO
    sueldo = horasTrabajadas * valorPorHora;
    printf("El sueldo correspondiente es: %f\n", sueldo);

    system("pause");
    return 0;
}
