/*2.12. Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
precio final (0 no aplica el descuento y 1 aplica el descuento).*/
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int precio, cod;

    printf("Ingrese el precio del producto\n");
    scanf("%d", &precio);

    printf("Ingrese el codigo: 1 aplica descuento / 0 No aplica descuento\n");
    scanf("%d", &cod);

    precio = precio - (precio*0.2) * cod;

    printf("El precio final del producto es: %d\n", precio);

    system("pause");
    return 0;
}