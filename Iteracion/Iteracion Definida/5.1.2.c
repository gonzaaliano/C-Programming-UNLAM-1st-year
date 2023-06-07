// 5.1.2 Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50.
// RESUELTO
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0, i;

    for (i = 100; i >= 50; i -= 5)
    {
        suma += i;
    }
    printf("La suma es: %d ", suma);
}