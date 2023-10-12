/*5.2.4 Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
y un código que indica la forma de pago. El código puede ser:
 C: cheque, 20% de recargo.
 E: efectivo, 10% de descuento.
 T: con tarjeta, 12% de recargo.

Se debe ingresar una F para finalizar el dia de venta y arrojar los siguientes totales.

EFECTIVO EN CAJA
MONTO VENTAS CON TARJETA DE CREDITO
MONTO VENTAS CON CHEQUE
TOTAL DE VENTA
IMPORTE DEL IVA

IVA CORRESPONDE AL 21% DEL TOTAL DE VENTAS.

RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int venta, totalTarjetaCredito = 0, totalCheque = 0, totalVentas = 0, importeIva, totalEfectivo = 0;
    char codigo = 'X';

    while (codigo != 'F')
    {
        printf("Ingrese la forma de pago:\n");
        printf("C: Cheque, 20%% de recargo\n");
        printf("E: Efectivo, 10%% de descuento\n");
        printf("T: Tarjeta, 12%% de recargo\n");
        printf("F: FINALIZAR DIA DE VENTA\n");

        fflush(stdin);

        scanf("%c", &codigo);

        if (codigo == 'F')
        {
            printf("No hubo fechas en el dia de hoy");
            return 0;
        }

        printf("Ingrese el importe total de la venta\n");
        scanf("%d", &venta);

        switch (codigo)
        {
        case 'C':
            totalCheque += venta + (venta * 0.20);
            totalVentas += totalCheque;
            break;
        case 'E':
            totalEfectivo += venta - (venta * 0.10);
            totalVentas += totalEfectivo;
            break;
        case 'T':
            totalTarjetaCredito += venta + (venta * 0.12);
            totalVentas += totalTarjetaCredito;
            break;
        default:
            break;
        }
    }

    totalVentas = totalEfectivo + totalTarjetaCredito + totalCheque;
    importeIva = totalVentas + (totalVentas * 0.21);

    printf("EFECTIVO EN CAJA: %d\n", totalEfectivo);
    printf("VENTAS CON TARJETA DE CREDITO: %d\n", totalTarjetaCredito);
    printf("VENTAS CON CHEQUE: %d\n", totalCheque);
    printf("TOTAL VENTA: %d\n", totalVentas);
    printf("IMPORTE DE IVA: %d\n", importeIva);

    system("pause");
    return 0;
}