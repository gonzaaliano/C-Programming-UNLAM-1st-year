/*4.10. Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, según el
valor de un código que se ingresa junto al valor. Si código = 1 se ingresan grados, si es 2 se ingresan radianes.
1 𝑟𝑎𝑑𝑖𝑎𝑛 =180 / 𝜋 grados.

1 𝑔𝑟𝑎𝑑𝑜 = 𝜋 / 180 𝑟𝑎𝑑𝑖𝑎𝑛𝑒𝑠. RESUELTO */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{

    int codigo, grados, radianes;

    printf("Ingrese 1 si se ingresan grados o 2 si se ingresan radianes\n");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        printf("Ingrese la cantidad en grados\n");
        scanf("%d", &grados);

        radianes = (180 / PI) * grados;

        printf("Los grados convertidos en radianes son: %d\n", radianes);
    }
    if (codigo == 2)
    {
        printf("Ingrese la cantidad en radianes\n");
        scanf("%d", &radianes);

        grados = (PI / 180) * radianes;

        printf("Los radianes convertidos en grados son: %d\n", grados);
    }
    else
        printf("El codigo ingresado es incorrecto");

    system("pause");
    return 0;
}

// EL ELSE APARECE IGUAL AL FINAL DEL PROGRAMA