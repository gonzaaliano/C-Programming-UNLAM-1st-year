#include <stdio.h>
#include <stdlib.h>

void CargaVector(float[], int);
void IngresarVentas(int[][20], float[], int);
void GenerarResumenVentas(int[][20], float[]);
void MostrarTotalVentasSucursal(int[][20]);
void MostrarImporteUltimoTrimestre(int[][20], float[]);

int main()
{
    // INGRESO DE PRECIOS DE LOS 20 PRODUCTOS
    float vectorPrecios[20];
    CargaVector(vectorPrecios, 20);

    // MATRIZ VENTAS
    int matrizVentas[12][20] = {0};

    // INGRESO DE VENTAS
    IngresarVentas(matrizVentas, vectorPrecios, 12);

    // GENERAR RESUMEN DE VENTAS POR PRODUCTO Y MES
    GenerarResumenVentas(matrizVentas, vectorPrecios);

    // MOSTRAR TOTAL DE VENTAS POR SUCURSAL
    MostrarTotalVentasSucursal(matrizVentas);

    // MOSTRAR IMPORTE TOTAL DE VENTAS EN EL ÚLTIMO TRIMESTRE
    MostrarImporteUltimoTrimestre(matrizVentas, vectorPrecios);

    return 0;
}

void CargaVector(float vec[], int tamanoVector)
{
    for (int i = 0; i < tamanoVector; i++)
    {
        printf("Ingrese el precio correspondiente al producto %d: ", 1000 + i);
        scanf("%f", &vec[i]);
    }
}

void IngresarVentas(int matriz[][20], float precios[], int filas)
{
    int codigoProducto, mes, cantidad, sucursal;

    printf("Ingrese las ventas realizadas en el año:\n");

    do
    {
        printf("Ingrese el código de producto (1000-1019): ");
        scanf("%d", &codigoProducto);
    } while (codigoProducto < 1000 || codigoProducto > 1019);

    while (codigoProducto != 0)
    {
        do
        {
            printf("Ingrese el mes correspondiente a la venta (1-12): ");
            scanf("%d", &mes);
        } while (mes < 1 || mes > 12);

        do
        {
            printf("Ingrese la cantidad vendida: ");
            scanf("%d", &cantidad);
        } while (cantidad < 1);

        do
        {
            printf("Ingrese la sucursal correspondiente (100, 200, 300, 400, 500): ");
            scanf("%d", &sucursal);
        } while (sucursal != 100 && sucursal != 200 && sucursal != 300 && sucursal != 400 && sucursal != 500);

        matriz[mes - 1][codigoProducto - 1000] += cantidad;

        do
        {
            printf("Ingrese el código de producto (1000-1019) (0 para terminar): ");
            scanf("%d", &codigoProducto);
        } while (codigoProducto < 0 || codigoProducto > 1019);
    }
}

void GenerarResumenVentas(int matriz[][20], float precios[])
{
    printf("Resumen de importe de ventas por producto y mes:\n");
    printf("Producto\tMes\tImporte\n");

    for (int producto = 1000; producto <= 1019; producto++)
    {
        for (int mes = 1; mes <= 12; mes++)
        {
            int cantidad = matriz[mes - 1][producto - 1000];
            float importe = cantidad * precios[producto - 1000];

            printf("%d\t\t%d\t%.2f\n", producto, mes, importe);
        }
    }
}
