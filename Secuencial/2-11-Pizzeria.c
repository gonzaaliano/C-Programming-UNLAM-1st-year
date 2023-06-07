/*2.11. Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra
individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las
adicionales se cobran como por unidad. Indicar el precio total a abonar.*/
//RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int empanadas, docena, unidades, importe;

    printf("Ingrese la cantidad de empanadas\n");
    scanf("%d", &empanadas);

    docena = empanadas / 12;
    unidades = empanadas % 12;
    importe = (docena * 300) + (unidades * 30);

    printf("El importe total a abonar es: %d\n", importe);

    system("pause");
    return 0;
}