// De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes
// parciales confeccionar, un programa que muestre por cada alumno su condición final con el siguiente
// mensaje:
// “El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]”
// La condición final se establece según las siguientes reglas:
// • PROMOCIONA: ambas notas > = 7
// • RINDE EXAMEN FINAL: ambas notas > = 4
// • REPROBO LA MATERIA: alguna nota no cumple lo anterior
// El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota
// promedio de alumnos promocionados.
//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dni, nota1, nota2, cantPromocionados = 0;
    float promedioPromocionados, sumaPromocionados;

    printf("INGRESE EL DNI DEL ALUMNO:\n");
    scanf("%d", &dni);

    while (dni > 0)
    {

        printf("INGRESE LA NOTA 1 DEL ALUMNO\n");
        scanf("%d", &nota1);

        printf("INGRESE LA NOTA 2 DEL ALUMNO\n");
        scanf("%d", &nota2);

        if (nota1 && nota2 >= 7)
        {
            printf("EL ALUMNO CON %d, OBTUVO LAS NOTAS %d y %d [PROMOCIONA]\n", dni, nota1, nota2);
            cantPromocionados++;
            sumaPromocionados += nota1 + nota2;
        }
        if (nota1 && nota2 >= 4)
        {
            printf("EL ALUMNO CON %d, OBTUVO LAS NOTAS %d y %d [RINDE EXAMEN FINAL]\n", dni, nota1, nota2);
        }
        else
        {
            printf("EL ALUMNO CON %d, OBTUVO LAS NOTAS %d y %d [REPROBO LA MATERIA]\n", dni, nota1, nota2);
        }

        printf("INGRESE EL DNI DEL ALUMNO:\n");
        scanf("%d", &dni);
    }

    if (cantPromocionados > 0)
    {
        promedioPromocionados = sumaPromocionados / (float)cantPromocionados;
        printf("LA CANTIDAD DE ALUMNOS PROMOCIONADOS ES DE %d\n", cantPromocionados);
        printf("LA SUMATORIA DE NOTAS DE LOS ALUMNOS PROMOCIONADOS ES DE %.2f\n", sumaPromocionados);
        printf("EL PROMEDIO DE LOS ALUMNOS PROMOCIONADOS ES DE %.2f\n", promedioPromocionados);
    }
    else
    {
        printf("NO HUBO ALUMNOS PROMOCIONADOS\n");
    }

    system("pause");
    return 0;
}