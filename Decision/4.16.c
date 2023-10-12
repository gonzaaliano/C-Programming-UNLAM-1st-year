/*4.16. Un negocio vende distintos artículos identificados por un código, según se muestra:
 código 1; 10; 100: 10 pesos la unidad.
 código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
 código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del
10% sobre el total de la compra.
 código 4; 44: 1 peso la unidad.
Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se
informe el importe de la compra, con las siguientes leyendas:
ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, cantidad, precio, importeFinal;

    printf("Ingrese el codigo de producto:\n");
    scanf("%d", &codigo);

    printf("Ingese la cantidad a comprar:\n");
    scanf("%d", &cantidad);

    if ((codigo > 0) && (cantidad > 0))
    {
        if ((codigo == 1) || (codigo == 10) || (codigo == 100))
        {
            precio = 10;
            importeFinal = cantidad * precio;
            printf("ARTICULO %d, CANTIDAD %d, IMPORTE A PAGAR $%d\n", codigo, cantidad, importeFinal);
        }
        if ((codigo == 2) || (codigo == 22) || (codigo == 222))
        {
            if (cantidad == 10)
            {
                precio = 65;
                importeFinal = precio;
                printf("ARTICULO %d, CANTIDAD %d, IMPORTE A PAGAR $%d\n", codigo, cantidad, importeFinal);
            }
            else
            {
                precio = 7;
                importeFinal = cantidad * precio;
                printf("ARTICULO %d, CANTIDAD %d, IMPORTE A PAGAR $%d\n", codigo, cantidad, importeFinal);
            }
        }
        if ((codigo == 3) || (codigo == 33))
        {
            if (cantidad > 10)
            {
                precio = 3;
                importeFinal = cantidad * precio;
                importeFinal = importeFinal - (importeFinal * 0.10);
                printf("ARTICULO %d, CANTIDAD %d, IMPORTE A PAGAR $%d\n", codigo, cantidad, importeFinal);
            }
            else
            {
                precio = 3;
                importeFinal = cantidad * precio;
                printf("ARTICULO %d, CANTIDAD %d, IMPORTE A PAGAR $%d\n", codigo, cantidad, importeFinal);
            }
        }
        if ((codigo == 4) || (codigo == 44))
        {
            precio = 1;
            importeFinal = cantidad * precio;
            printf("ARTICULO %d, CANTIDAD %d, IMPORTE A PAGAR $%d\n", codigo, cantidad, importeFinal);
        }
    }

    system("pause");
    return 0;
}