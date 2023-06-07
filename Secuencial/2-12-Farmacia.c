/*2.12. Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
precio final (0 no aplica el descuento y 1 aplica el descuento).*/
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigoProducto;
    float precioProducto, precioDto;

    printf("Ingrese codigo del producto:\n");
    scanf("%d", &codigoProducto);
    printf("Ingrese el precio del producto\n");
    scanf("%f", &precioProducto);

    codigoProducto = 0;
    printf("Producto sin descuento, se mantiene el precio de lista %f\n", precioProducto);

    codigoProducto = 1;
    precioDto = precioProducto - (precioProducto * 1.2);

    printf("El precio del producto con el descuento es: %f", precioDto);

    system("pause");
    return 0;
}

//REVISAR