/*4.6. Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor
valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, menor, medio2, medio1, mayor;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);

    menor = num1;

    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);

    if (num2 < menor)
    {
        medio2 = menor;
        menor = num2;
    }
    else
    {
        medio2 = num2;
    }

    printf("Ingrese el tercer numero:\n");
    scanf("%d", &num3);

    if (num3 < menor)
    {
        medio2 = medio1;
        medio2 = menor;
        menor = num3;
    }
    else if (num3 < medio1)
    {
        medio2 = medio1;
        medio1 = num3;
    }
    
    {
    }

    printf("Ingrese el cuarto numero:\n");
    scanf("%d", &num4);

    if (num4 < menor)
    {
        mayor = medio1;
        medio2 = medio1;
        menor = medio2;
        menor = num4;
    }

    system("pause");
    return 0;
}