/*5.1.6 Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par.*/
//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, num, sumaMultiplos3 = 0, cantidadMultiplos5 = 0, sumaPares = 0, bandera = 0;

    printf("Ingrese un numero positivo mayor a 0:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Ingrese numeros\n");
        scanf("%d", &num);

        if (num % 3 == 0)
        {
            sumaMultiplos3 += num;
        }

        if (num % 5 == 0)
        {
            cantidadMultiplos5++;
        }
        if (bandera == 1)
        {
            sumaPares += num;
            bandera = 0;
        }
        else
            bandera = 1;
    }

    printf("Acumulado Multiplos de 3 hay %d\n", sumaMultiplos3);
    printf("Cantidad Multiplos de 5 hay %d\n", cantidadMultiplos5);
    printf("Sumatoria valores de orden par %d\n", sumaPares);

    system("pause");
    return 0;
}