// 2.2. Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1, nota2, sumaNotas, notaPromedio; // DECLARACION DE 4 VARIABLES

   printf("Bienvenido al programa Notas Promedio\n");

   // INGRESO DEL USUARIO
   printf("Ingrese la primer nota del alumno\n");
   scanf("%f", &nota1);

   printf("Ingrese la segunda nota del alumno\n");
   scanf("%f", &nota2);

   // SUMO LAS DOS NOTAS Y CALCULO EL PROMEDIO
   sumaNotas = nota1 + nota2;

   notaPromedio = sumaNotas / 2;

   printf("El promedio de las notas es: %.2f\n", notaPromedio);

   system("pause");

   return 0;
}