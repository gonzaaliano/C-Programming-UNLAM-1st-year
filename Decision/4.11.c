/*4.11. Escribir un programa que solicite el año y el número de mes y nos informe cuantos días tiene dicho mes.
Debemos considerar que el año puede ser bisiesto. Un año es bisiesto cuando es divisible por 4 y no por
100 o el año es divisible por 400.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int year, month, days;

    printf("Ingrese el ano\n");
    scanf("%d", &year);

    printf("Ingrese el mes\n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        /* code */
        break;
    
    default:
        break;
    }
}
