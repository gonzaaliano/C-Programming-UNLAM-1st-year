/*5.1.9 Confeccionar un programa que exhiba por pantalla una lista, a dos columnas, con los primeros 15 números
impares en la primera y los 15 primeros pares en la segunda, incluyendo los títulos de IMPAR O PAR.*/

// Ingreso numeros y determino si son pares o impares.
// Armo una lista para cada caso (PAR O IMPAR) y hago el print de los primeros 15 valores en pantalla.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, par, impar;

    for (int i = 1; i <= 10; i++)
    {
        printf("PARES:\n");
        printf("%d. %d", i, num);

        printf("IMPARES:\n");
        printf("%d. %d", i, num);

        for (int j = 1; j <= 10; j++)
        {
            printf("Ingrese un numero par o impar\n");
            scanf("%d", &num);

            if (num % 2 == 0)
            {
                num = par;
            }
            else
                num = impar;
        }
    }

    system("pause");
    return 0;
}
