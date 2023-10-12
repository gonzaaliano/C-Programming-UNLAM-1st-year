/*4.6. Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor
valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.*/

// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, menor, orden;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);

    menor = num1;
    orden = 1;

    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);

    if (num2 < menor)
    {
        menor = num2;
        orden = 2;
    }

    printf("Ingrese el tercer numero:\n");
    scanf("%d", &num3);
    if (num3 < menor)
    {
        menor = num3;
        orden = 3;
    }

    printf("Ingrese el cuarto numero:\n");
    scanf("%d", &num4);
    if (num4 < menor)
    {
        menor = num4;
        orden = 4;
    }

    printf("Los valores ingresados son: %d(NUM1), %d(NUM2), %d(NUM3), %d(NUM4)\n", num1, num2, num3, num4);
    printf("MENOR: %d, su numero de orden %d\n", menor, orden);

    system("pause");
    return 0;
}