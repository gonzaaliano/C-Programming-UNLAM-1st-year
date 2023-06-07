/*4.1. Se ingresan 3 números distintos. Determinar el mayor.*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese 3 numeros que sean distintos\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("El numero mayor es el: %d\n", num1);
    }
    if (num2 > num1 && num2 > num3)
    {
        printf("El numero mayor es: %d\n", num2);
    }
    if (num3 > num1 && num3 > num2)
    {
        printf("El numero mayor es: %d\n", num3);
    };

    system("pause");
    return 0;
}