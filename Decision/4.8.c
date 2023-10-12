/*4.8. Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo.
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Ingrese 2 numeros\n");
    scanf("%d%d", &num1, &num2);

    if (num1 % num2 == 0)
    {
        printf("El primer numero: %d, es divisible por el segundo numero %d.\n", num1, num2);
    }
    else
    {
        printf("No es divisible\n");
    }

    system("pause");
    return 0;
}

// CUANDO PONGO 0 COMO DIVISOR NO IMPRIME NO ES DIVISIBLE
