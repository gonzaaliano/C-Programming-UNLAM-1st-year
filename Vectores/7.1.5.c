/*7.1.5 Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Por
cada pedido se recibe:
• Código de producto (de 1 a 10)
• Cantidad de unidades solicitadas
Se puede recibir más de un pedido por producto.
La carga finaliza cuando se ingresa un producto con código igual a cero.
Al finalizar se debe emitir un listado con código y cantidad de unidades solicitadas de cada producto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int codProducto[10];
    int cantUnidades[100];

    printf("Ingrese el codigo del producto\n");
    scanf("%d", codProducto[i]);

    while (codProducto[i] != 0)
    {
        printf("Ingrese la cantidad de unidades solicitadas por producto\n");
        scanf("%d")
    }

    system("pause");
    return 0;
}