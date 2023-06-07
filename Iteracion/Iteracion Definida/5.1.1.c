// 5.1.1 Mostrar por pantalla los números pares comprendidos entre 100 y 500.
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 100;

    for (i = 100; i < 500; i += 2)
    {
        printf("%d ", i);
    }

    system("pause");
    return 0;
}