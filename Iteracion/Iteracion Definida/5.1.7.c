/*5.1.7 Dadas 20 notas y legajos de alumnos de un curso. Determinar:
a. Cantidad de alumnos aplazados.
b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado”.*/
//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, alumnosAplazados = 0, nota, legajo;

    for (i = 1; i <= 5; i++)
    {
        printf("Ingrese nota del alumno\n");
        scanf("%d", &nota);
        printf("Ingrese legajo del alumno\n");
        scanf("%d", &legajo);

        if (nota < 4)
        {
            alumnosAplazados++;
        }
        if (nota > 7)
        {
            printf("El alumno con legajo %d, ha promocionado.\n", legajo);
        }
    }

    printf("La cantidad de alumnos aplazados es: %d\n", alumnosAplazados);

    system("pause");
    return 0;
}