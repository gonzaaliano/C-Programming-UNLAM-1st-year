//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, contadorParesIguales = 0;

    printf("Ingrese pares de numeros 0 y 0 (fin) \n");
    scanf("%d%d", &num1, &num2);

    while (num1 != 0 || num2 != 0)
    {
        if (num1 == num2)
        {
            contadorParesIguales++;
        }

        printf("Ingrese pares de numeros, 0 y 0 (fin)\n");
        scanf("%d%d", &num1, &num2);
    }

    printf("La cantidad de numeros iguales es: %d\n", contadorParesIguales);

    system("pause");
    return 0;
}
