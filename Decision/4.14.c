/*4.14. La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala:
a. menor de $55 el descuento es del 4.5%
b. entre $55 y $100 el descuento es del 8%
c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios. RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int precio, importeFinal;

    printf("Informe el precio del producto\n");
    scanf("%d", &precio);

    if (precio > 0)
    {
        if (precio < 55)
        {
            importeFinal = (precio - (precio * 0.045));
            printf("El importe final con el descuento es: %d\n", importeFinal);
        }
        else if (precio <= 100)
        {
            importeFinal = (precio - (precio * 0.08));
            printf("El importe final con el descuento es: %d\n", importeFinal);
        }
        else if (precio > 100)
        {
            importeFinal = (precio - (precio * 0.105));
            printf("El importe final con el descuento es: %d\n", importeFinal);
        }
        else
        {
            printf("No se aplica ningun descuento\n");
        }
    }

    system("pause");
    return 0;
}