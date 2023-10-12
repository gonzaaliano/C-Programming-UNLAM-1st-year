/*5.2.2 Escribir las sentencias que permitan el ingreso correcto del valor numérico de un día y un mes
determinado. Por algún error volver a solicitar. */
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia = 0, mes = 0;

    do
    {
        printf("Ingrese un dia y mes correctos:\n");

        scanf("%d%d", &dia, &mes);

    } while ((dia <= 0 || dia >= 32) || (mes <= 0 || mes >= 13));

    printf("El dia ingresado es: %d\n", dia);
    printf("El mes ingresado es: %d\n", mes);

    system("pause");
    return 0;
}