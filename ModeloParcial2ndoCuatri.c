#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tipoProducto;
    int cant, cantusados = 0, cantVentasNuevos = 0, dto = 0, porcdto = 0, unidadesAdicionales;
    float precio, importeFinal, precioCaja, precioUnidad;

    do
    {
        printf("Ingrese el tipo de producto: N(Nuevo), U(Usado), R(Reacondicionado)\n");
        scanf("%c", &tipoProducto);
        tipoProducto = toupper(tipoProducto);

    } while ((tipoProducto != 'N') && (tipoProducto != 'U') && (tipoProducto != 'R') && (tipoProducto != 'F'));

    while (tipoProducto != 'F')
    {
        if (tipoProducto == 'N')
        {
            cantVentasNuevos++;
        }

        do
        {
            printf("Ingrese la cantidad\n");
            scanf("%d", &cant);
        } while (cant <= 0);

        do
        {
            printf("Ingrese el precio\n");
            scanf("%f", &precio);
        } while (precio <= 0);

        importeFinal = cant * precio;

        if (tipoProducto == 'U' && cant > 3)
        {
            importeFinal = importeFinal - (importeFinal * 0.15);
            dto = 1;
            porcdto = 15;
        }
        if (tipoProducto == 'N' && cant > 10)
        {
            importeFinal = importeFinal - (importeFinal * 0.10);
            dto = 1;
            porcdto = 10;
        }
        if (tipoProducto == 'R')
        {
            cant = cant / 5;
            printf("La cantidad es: %d\n", cant);

            unidadesAdicionales = cant % 5;
            printf("Unidades adicionales es: %d\n", unidadesAdicionales);

            precioCaja = (float)(cant * precio);
            printf("El precio de la caja es(cantidad %d * precio %f) = %f\n", cant, precio, precioCaja);

            precioUnidad = (float)(unidadesAdicionales * precio);
            printf("El precio de la unidad es(cantidad %d * precio %f) = %f\n", cant, precio, precioUnidad);

            importeFinal = (precioCaja + precioUnidad);
            printf("EL importe final es: %f + %f = %.2f\n", precioCaja, precioUnidad, importeFinal);
            importeFinal = importeFinal - (importeFinal * 0.20);
            porcdto = 20;
        }
        if (tipoProducto == 'U' && cant > 0)
        {
            cantusados += cant;
        }
        if (dto == 1)
        {
            printf("El importe final con el descuento del %d es de %.2f\n", porcdto, importeFinal);
        }
        else
            printf("El importe final es de: %.2f\n", importeFinal);

        do
        {
            printf("Ingrese el tipo de producto: N(Nuevo), U(Usado), R(Reacondicionado)\n");
            fflush(stdin);
            scanf("%c", &tipoProducto);

        } while ((tipoProducto != 'N') && (tipoProducto != 'U') && (tipoProducto != 'R') && (tipoProducto != 'F'));
    }

    if (cantusados > 0)
    {
        printf("La cantidad total de productos usados es de: %d\n", cantusados);
    }
    else
        printf("No hubo ventas de productos usados\n");

    if (cantVentasNuevos > 0)
    {
        printf("La cantidad de ventas de productos nuevos fue de %d\n", cantVentasNuevos);
    }
    else
        printf("No hubo ventas de productos nuevos");

    system("pause");
    return 0;
}
