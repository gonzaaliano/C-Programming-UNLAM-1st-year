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

#include <stdio.h>
#include <stdlib.h>

// int main()
// {

//     int dni, nota1, nota2, cantPromocionados = 0;
//     float sumaPromocionados = 0, promedioPromocionados = 0;

//     while (dni > 0)
//     {
//         printf("Ingrese el DNI del alumno\n");
//         scanf("%d", &dni);

//         printf("Ingrese las notas de los examenes(Examen 1 y Examen 2)\n");
//         scanf("%d%d", &nota1, &nota2);

//         if (nota1 >= 7 && nota2 >= 7)
//         {
//             printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [PROMOCIONA]\n", dni, nota1, nota2);
//             cantPromocionados++;
//             sumaPromocionados += nota1 + nota2;
//         }
//         if ((nota1 >= 4 && nota1 < 7) && (nota2 >= 4 && nota2 < 7))
//         {
//             printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [RINDE EXAMEN FINAL]\n", dni, nota1, nota2);
//         }
//         else
//         {
//             printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [REPROBO LA MATERIA]\n", dni, nota1, nota2);
//         }
//     }

//     promedioPromocionados = sumaPromocionados / (float)cantPromocionados;

//     printf("NOTA PROMEDIO ALUMNOS PROMOCIONADOS: %f\n", promedioPromocionados);

//     system("pause");
//     return 0;
// }

int main()
{
    int dni, nota1, nota2, cantPromocionados = 0;
    float sumaPromocionados = 0, promedioPromocionados = 0;

    do
    {

        printf("Ingrese el DNI del alumno\n");
        scanf("%d", &dni);

        printf("Ingrese las notas de los examenes(Examen 1 y Examen 2)\n");
        scanf("%d%d", &nota1, &nota2);

    } while (dni < 0);

    if (nota1 >= 7 && nota2 >= 7)
    {
        /* code */
    }
}