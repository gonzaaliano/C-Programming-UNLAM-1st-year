/*4.3. Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
es igual a la suma de los otros dos.*/
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese 3 numeros enteros");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 + num2 == num3)
    {
        printf("La suma del primer numero + el segundo equivale al tercero.");
    }
    if (num1 + num3 == num2)
    {
        printf("La suma del primer numero + el tercero equivale al segundo.");
    }
    if (num2 + num3 == num1)
    {
        printf("La suma del segundo numero + el tercero equivale al primero.");
    }

    system("pause");
    return 0;
}