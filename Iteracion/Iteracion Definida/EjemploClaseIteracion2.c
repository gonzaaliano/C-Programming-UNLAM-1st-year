#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, menor, orden, num;

    for (i = 1; i <= 4; i++)
    {
        printf("Ingrese el %d numero\n", i);
        scanf("%d", &num);
        if (i == 1 || num < menor)
        {
            menor = num;
            orden = i;
        }
    }

    printf("El menor es %d y se ingreso en %d orden\n", menor, orden);

    system("pause");
    return 0;
}