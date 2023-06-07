/*4.5. Se ingresan 3 números enteros. Informarlos en orden creciente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, menor, medio, mayor;

    printf("Ingrese 3 numeros enteros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Encontrar el número menor
    if (num1 < num2)
    {
        menor = num1;
        medio = (num2 < num3) ? num2 : num3;
        mayor = (num2 < num3) ? num3 : num2;
    }
    else
    {
        menor = num2;
        medio = (num1 < num3) ? num1 : num3;
        mayor = (num1 < num3) ? num3 : num1;
    }
    if (medio > mayor)
    {
        int temp = medio;
        medio = mayor;
        mayor = temp;
    }

    printf("Los numeros ordenados en orden creciente son: %d %d %d", menor, medio, mayor);

    return 0;
}