// 5.1.5 Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo solicita por teclado el programa.
//RESUELTO
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0, num, i;

    printf("Ingrese un numero positivo mayor a 0:\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        suma += i;
    }

    printf("La suma es: %d\n", suma);

    system("pause");
    return 0;
}