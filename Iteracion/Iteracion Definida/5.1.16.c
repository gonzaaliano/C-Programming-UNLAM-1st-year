/*5.1.16 Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota
promedio (considerar único)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int alumnos = 10, dni;
    float notaPromedio, notaMaxima = 0;

    for (int i = 1; i <= alumnos; i++)
    {
        printf("Ingrese los datos del alumno: %d\n", i);

        printf("Ingrese el DNI del alumno:\n");
        scanf("%d", &dni);

        printf("Ingrese la nota promedio del alumno\n");
        scanf("%f", &notaPromedio);

        if (notaPromedio >= notaMaxima)
        {
            notaMaxima = notaPromedio;
        }
    }

    if (notaMaxima > 0)
    {
        printf("El alumno con DNI: %d, obtuvo la nota promedio maxima: %.2f, ", dni, notaMaxima);
    }

    system("pause");
    return 0;
}