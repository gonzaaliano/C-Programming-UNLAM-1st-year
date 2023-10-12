/*5.1.11 Ingresar 18 valores de temperatura distintos de cero. Se pide determinar e informar cuantas ternas (tres
valores seguidos) de valores positivos y cuantas de negativos hay. 
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatura, ternaPositiva = 0, ternaNegativa = 0, contadorPositivo = 0, contadorNegativo = 0;

    for (int i = 1; i <= 18; i++)
    {
        printf("Ingrese un valor de temperatura\n");
        scanf("%d", &temperatura);

        if (temperatura > 0)
        {
            contadorPositivo++;
            contadorNegativo = 0;

            if (contadorPositivo == 3)
            {
                ternaPositiva++;
                contadorPositivo = 0;
            }
        }
        else
        {
            if (temperatura < 0)
            {
                contadorNegativo++;
                contadorPositivo = 0;

                if (contadorNegativo == 3)
                {
                    ternaNegativa++;
                    contadorNegativo = 0;
                }
            }
        }
    }

    printf("Cantidad de ternas positivas %d\n", ternaPositiva);
    printf("Cantidad de ternas negativas %d\n", ternaNegativa);

    system("pause");
    return 0;
}