/*5.1.8 Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
a. Edad promedio.
b. Estatura promedio.
c. Cantidad de alumnos mayores de 10 años.
d. Cantidad de alumnos que miden menos de 1.40 cm.*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>
#define cantAlumnos 3

int main()
{
    int edad, i, totalEdad = 0, cantAlumnosmas10 = 0, cantAlumnosmen140 = 0, promedioEdad;
    float estatura, totalEstatura = 0, promedioEstatura;

    for (i = 1; i <= cantAlumnos; i++)
    {
        printf("Ingrese la edad del alumno\n");
        scanf("%d", &edad);
        printf("Ingrese la estatura del alumno\n");
        scanf("%f", &estatura);

        totalEdad += edad;
        totalEstatura += estatura;

        if (edad > 10)
        {
            cantAlumnosmas10++;
        }
        if (estatura < (float)1.40)
        {
            cantAlumnosmen140++;
        }
    }

    promedioEdad = totalEdad / cantAlumnos;
    promedioEstatura = (float)totalEstatura / cantAlumnos;

    printf("El promedio de todas las edades es: %d \n", promedioEdad);
    printf("El promedio de todas las estaturas es: %.2f \n", promedioEstatura);
    printf("La cantidad de alumnos mayores a 10 es: %d \n", cantAlumnosmas10);
    printf("La cantidad de alumnos menores 1.40 de estatura es: %d \n", cantAlumnosmen140);

    system("pause");
    return 0;
}
