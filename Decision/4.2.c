/*4.2. Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
los otros dos.*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, num3;

    printf("Ingrese 3 numeros\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("El primer numero es menor al segundo y tercero ");
    }
    else
        printf("El primer numero es mayor que el segundo o el tercero ");

    system("pause");
    return 0;
}