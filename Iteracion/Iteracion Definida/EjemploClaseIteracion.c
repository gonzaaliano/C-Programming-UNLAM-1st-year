#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, suma = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d", &num);

        suma += num;
    }

    printf("valor de i: %d\n", i);

    printf("La suma de los numeros es: %d\n", suma);
    printf("El calculo del promedio es: %d/%d-1\n", suma, i);
    printf("El promedio de los numeros es: %.2f\n", (float)suma / (i - 1));

    system("pause");
    return 0;
}