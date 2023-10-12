/*5.2.1 Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean
menores que 600. (1 2 4 8 16 …)*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, potencia;

    potencia = 1;

    while (potencia < 600)
    {
        if (potencia == 1)
            printf("%d\n", potencia);

        potencia = potencia * 2;

        if (potencia < 600)
        {
            printf("%d\n", potencia);
        }
    }

    system("pause");
    return 0;
}