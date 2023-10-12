// 5.2.14 Se ingresan datos de los empleados de una empresa. Por cada empleado se ingresa:
// • Legajo (entero entre 1000 y 5000)
// • Sueldo básico (float mayor a 1000)
// • Antigüedad en años (mayor o igual a 0)
// • Sexo (‘M' o 'F')
// • Categoría (entero entre 1 a 5)
// Por cada empleado ingresado se debe calcular el sueldo final a abonar sabiendo que:
// • Las Categorías 2 y 3 tienen $500 de bonificación.
// • La Categoría 4 tiene 10% de bonificación.
// • La Categoría 5 tiene 30% de bonificación.
// • Si la antigüedad es mayor a 10 años recibe una bonificación del 10% adicional.
// Todos los datos ingresados deben ser validados. El ingreso finaliza con un legajo igual a cero.
// Informar:
// • El sueldo a abonar a cada empleado.
// • Cantidad de empleados de más de 10 años de antigüedad.
// • El mayor sueldo y el legajo del empleado que cobra dicho sueldo.
// • Cantidad de hombres y de mujeres.

//FALTA CALCULAR EL SUELDO MAYOR

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int legajo, antiguedad, categoria, contAntMas10 = 0, cantHombres = 0, cantMujeres = 0;
    float sueldo, sueldoFinal;
    char sexo;

    do
    {
        printf("Ingrese el numero de legajo del empleado\n");
        scanf("%d", &legajo);

    } while (legajo < 1000 || legajo > 5000);

    while (legajo != 0)
    {

        // INGRESO DE SUELDO BASICO
        do
        {
            printf("Ingrese el sueldo basico del empleado\n");
            scanf("%f", &sueldo);

            if (sueldo < 1000)
            {
                printf("ERROR, vuelva a ingresar el sueldo\n");
            }

        } while (sueldo <= 1000); // IGUAL POR QUE TIENE QUE SER MAYOR A MIL

        // INGRESO DE ANTIGUEDAD
        do
        {
            printf("Ingrese la antiguedad del empleado\n");
            scanf("%d", &antiguedad);

            if (antiguedad < 0)
            {
                printf("ERROR, vuelva a ingresar la antiguedad");
            }

        } while (antiguedad < 0);

        // INGRESO DE SEXO
        do
        {
            printf("Ingrese el sexo del empleado(M: masculino, F: femenino)\n");
            scanf("%c", &sexo);
            fflush(stdin);

            toupper(sexo);

        } while (sexo != 'F' && sexo != 'M');

        // INGRESE LA CATEGORIA DEL EMPLEADO
        do
        {
            printf("Ingrese la categoria del empleado\n");
            scanf("%i", &categoria);
        } while (categoria < 1 && categoria > 5);

        sueldoFinal = sueldo;

        switch (categoria)
        {
        case 2 && 3:
            sueldoFinal = sueldo + 500;
            break;
        case 4:
            sueldoFinal = sueldo + (sueldo * 0.10);
            break;
        case 5:
            sueldoFinal = sueldo + (sueldo * 0.30);
            break;
        default:
            break;
        }

        if (antiguedad > 10)
        {
            sueldoFinal = sueldo + (sueldo * 0.10);
            contAntMas10++;
        }

        if (sexo == 'M' || sexo == 'm')
        {
            cantHombres++;
        }
        if (sexo == 'F' || sexo == 'f')
        {
            cantMujeres++;
        }
    }

    printf("El sueldo a abonar a cada empleado es:\n");
    printf("LEGAJO: %d, SUELDO FINAL: %.2f", legajo, sueldoFinal);

    printf("La cantidad de empleados con mas de 10 anos de antiguedad es de: %d", contAntMas10);

    printf("El empleado con el mayor sueldo es: LEGAJO: %d, SUELDO: %.2f", legajo, sueldoFinal);

    printf("EMPLEADOS MASCULINOS: %d", cantHombres);
    printf("EMPLEADOS FEMENINOS: %d", cantMujeres);

    system("pause");
    return 0;
}