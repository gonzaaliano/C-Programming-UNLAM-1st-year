/*4.4. Ingresar 3 valores reales y:
a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
b. Si los tres son iguales informar “TRES IGUALES .
c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”*/
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese 3 numeros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if ((num1 > num3) && (num2 > num3))
    {
        printf("Mayores al tercero\n");
    }
    if ((num1 == num2) && (num2 == num3))
    {
        printf("Los 3 numeros son iguales\n");
    }
    if ((num1 < num3) || (num2 < num3))
    {
        printf("Alguno de los dos numeros es menor al tercero\n");
    }

    system("pause");
    return 0;
}