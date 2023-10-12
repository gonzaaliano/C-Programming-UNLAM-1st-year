/*4.15. Un negocio de artículos de computación vende DVDs según la siguiente escala de precios:
 sueltos, entre 1 y 9 a $15 c/u.
 la caja de 10 cuesta $120.
 la caja de 50 cuesta $500.
Si la compra excede las 100 unidades se efectúa un descuento del 10%.
NOTA: se aceptan compras entre 1 y 500 DVDs.
Se pide que se ingrese una cantidad de DVDs que se quiere comprar y calcule e informe el importe a pagar
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cds, precio, importeFinal, montoTotal;

    printf("Ingrese la cantidad de CDs a comprar\n");
    scanf("%d", &cds);

    if (cds > 0 && cds <= 500)
    {
        if (cds >= 1 && cds <= 9)
        {
            precio = 15;
            importeFinal = cds * precio;

            printf("El importe final por la cantidad de %d cds es: %d\n", cds, importeFinal);
        }
        if (cds == 10)
        {
            precio = 120;
            importeFinal = precio;

            printf("El importe final por la caja de %d cds es: %d\n", cds, importeFinal);
        }
        if (cds == 50)
        {
            precio = 500;
            importeFinal = precio;
            printf("El importe final por la caja de %d cds es: %d\n", cds, importeFinal);
        }
        if (cds >= 100)
        {
            precio = 15;
            montoTotal = (cds * precio);
            importeFinal = (montoTotal - (montoTotal * 0.10));
            printf("El importe final con el descuento es de: %d\n", importeFinal);
        }
    }
    else
    {
        printf("No se permiten compras mayores a 500.\n");
    }

    system("pause");
    return 0;
}

// REVISAR, no calcula porcentaje de dto.