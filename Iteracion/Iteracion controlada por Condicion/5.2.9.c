// 5.2.9 Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
// cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se
// conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
// • Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
// • Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
// • Si el empleado posee estudios superiores: aumento del 5%
// Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
// termina la carga cuando no se deseen ingresar más empleados.
// Determinar:
// a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
// b. Sueldo nuevo promedio de la empresa.
//REVISAR

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int antiguedad, cantHijos = 0, nroEmpleado, finalizacion, cantAumentos;
    float sueldoFinal, sueldoBasico, sueldoPromedioNuevo, totalSueldos;
    char estudios;

    do
    {

        printf("DESEA INGRESAR EMPLEADOS ? (1 SI / 0 NO)\n");
        scanf("%d", &finalizacion);
    } while (finalizacion < 0 && finalizacion > 1);

    while (finalizacion == 1)
    {
        printf("INGRESE EL NUMERO DE EMPLEADO\n");
        scanf("%d", &nroEmpleado);

        do
        {
            printf("INGRESE EL SUELDO BASICO\n");
            scanf("%f", &sueldoBasico);

            if (sueldoBasico <= 0)
            {
                printf("ERROR, HA INGRESADO UN SUELDO MENOR O IGUAL A 0.INGRESE NUEVAMENTE\n");
            }

        } while (sueldoBasico <= 0);

        printf("INGRESE LA ANTIGUEDAD DEL EMPLEADO\n");
        scanf("%d", &antiguedad);

        printf("INGRESE LA CANTIDAD DE HIJOS DEL EMPLEADO\n");
        scanf("%d", &cantHijos);

        do
        {
            printf("INGRESE LOS ESTUDIOS DEL EMPLEADO (S o N)\n");
            fflush(stdin);
            scanf("%c", &estudios);

            if (estudios != 'S' && estudios != 'N')
            {
                printf("ERROR, HA INGRESADO OTRO CARACTER, INGRESE NUEVAMENTE S(SI), N(NO)\n");
            }

        } while ((estudios != 'S') && (estudios != 'N'));

        if (antiguedad > 10)
        {
            sueldoFinal = sueldoBasico + (sueldoBasico * 0.10);
            sueldoPromedioNuevo += sueldoFinal;
        }
        if (cantHijos > 2)
        {
            sueldoFinal = sueldoBasico + (sueldoBasico * 0.10);
        }
        else
        {
            sueldoFinal = sueldoBasico + (sueldoBasico * 0.5);
        }

        if (estudios == 'S')
        {
            sueldoFinal = sueldoBasico + (sueldoBasico * 0.5);
        }

        if (sueldoFinal > sueldoBasico)
        {
            cantAumentos++;
        }

        totalSueldos += sueldoFinal;

        printf("EMPLEADO NUMERO: %d\n", nroEmpleado);
        printf("SUELDO BASICO: %.2f\n", sueldoBasico);
        printf("SUELDO FINAL: %.2f\n", sueldoFinal);

        do
        {
            printf("DESEA INGRESAR EMPLEADOS ? (1 SI / 0 NO)\n");
            scanf("%d", &finalizacion);
        } while (finalizacion < 0 && finalizacion > 1);
    }

    sueldoPromedioNuevo = totalSueldos / (float)cantAumentos;

    printf("SUELDO NUEVO PROMEDIO DE: %.2f\n", sueldoPromedioNuevo);

    system("pause");
    return 0;
}