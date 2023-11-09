// 5.2.11 Se ingresan números enteros, hasta que se ingrese el número cero. Determinar los 2 valores mayores.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, mayor1 = 1, mayor2 = 0;

    printf("Ingrese un numero entero\n");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num > mayor1 && num > mayor2)
        {
            mayor1 = num;
        }
        if (num < mayor1 && num > mayor2)
        {
            mayor2 = num;
        }

        printf("Ingrese un numero entero\n");
        scanf("%d", &num);
    }

    printf("Los dos mayores valores son: %d y %d", mayor1, mayor2);

    system("pause");
    return 0;
}