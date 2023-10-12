/*4.5. Se ingresan 3 números enteros. Informarlos en orden creciente.*/

//REVISAR

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, mayor, medio, menor;

    printf("Ingrese un numero\n");
    scanf("%d", &num1);

    printf("Ingrese un numero\n");
    scanf("%d", &num2);

    printf("Ingrese un numero\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        mayor = num1;

        if (num2 > num3)
        {
            medio = num2;
            menor = num3;
        }
        else
            medio = num3;
        menor = num2;
    }
    if (num2 > num1 && num2 > num3)
    {
        mayor = num2;
        if (num1 > num3)
        {
            medio = num1;
            menor = num3;
        }
        else
        {
            medio = num3;
            menor = num1;
        }
    }
    else
    {
        mayor = num3;
        if (num1 > num2)
        {
            medio = num1;
            menor = num2;
        }
        else
        {
            medio = num2;
            menor = num1;
        }
    }

    printf("Los numeros en orden creciente son: %d, %d, %d\n", menor, medio, mayor);

    system("pause");
    return 0;
}