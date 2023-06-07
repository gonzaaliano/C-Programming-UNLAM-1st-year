// 5.1.3 Se ingresan 50 números enteros. Determinar el promedio de los números pares.
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, suma, contadorPares;
    float promedioPares;
    contadorPares = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            suma += num;
            contadorPares++;
        }
    }

    if (contadorPares > 0)
    {
        printf("La suma total de los numeros pares es: %d\n", suma);
        printf("La cantidad de numeros pares es: %d\n", contadorPares);

        promedioPares = suma / contadorPares;
        printf("El promedio de los numeros enteros es: %f\n", promedioPares);
    }
    else
        printf("No se promedian los pares");

    system("pause");
    return 0;
}
