/*Una empresa maneja 20 productos numerados del 1000 al 1019. Además, vende en 5 sucursales
distintas con códigos 100, 200, 300,400 y 500. Como información inicial se debe ingresar el precio
de los 20 productos.
Por teclado se ingresan las ventas realizadas en el año. Por cada venta se ingresa:
- Código de producto
- Mes
- Cantidad Vendida
- Sucursal
Las ventas se ingresan sin orden alguno y terminan con una Sucursal igual a 0.
Todos los datos que se ingresan deben estar correctamente validados
a) Mostrar un cuadro resumen del importe de las ventas del año por vendedor. Según el
siguiente formato (mostrar títulos):
Producto Mes 1 Mes 2 Mes 3 Mes 4 .. Mes 12
1000 xxx.xx xxx.xx xxx.xx xxx.xx ... xxx.xx
1001 xxx.xx xxx.xx xxx.xx xxx.xx ... xxx.xx
1002 xxx.xx xxx.xx xxx.xx xxx.xx ... xxx.xx
..
1019 xxx.xx xxx.xx xxx.xx xxx.xx ... xxx.xx
b) Mostrar la cantidad total de ventas realizadas en cada sucursal a lo largo del año// CONTADOR POR CADA SUCURSAL
c) Mostrar el importe total de ventas en el último trimestre del año // ACUMULADOR DE VENTAS PARA LOS MESES 12, 11, 10
Usar funciones para separar la lógica del programa y además como mínimo realizar las
siguientes funciones:
- Función con argumentos (reutilizable) para ingresar los meses , y códigos de producto.
- Función para cargar el vector de precios*/

// #include <stdio.h>
// #include <stdlib.h>

// void CargaVector(float[], int);
// void IngresarVentas(int[][20], float[], int);
// void GenerarResumenVentas(int[][20], float);
// void MostrarTotalVentasSucursal(int[][20]);

// int main()
// {
//     // INGRESO DE PRECIOS DE LOS 20 PRODUCTOS
//     float vectorPrecios[20];
//     CargaVector(vectorPrecios, 20);

//     // MATRIZ VENTAS
//     int matrizVentas[12][20] = {0};

//     // INGRESO DE VENTAS
//     IngresarVentas(matrizVentas, vectorPrecios, 12);

//     return 0;
// }

// // PARA INGRESAR MESES Y CODIGOS DE PRODUCTO Y SUCURSAL
// void CargaVector(float vec[], int tamanoVector)
// {
//     for (int i = 0; i < tamanoVector; i++)
//     {
//         printf("Ingrese los precios correspondientes a los 20 productos:\n");
//         scanf("%f", &vec[i]);
//     }
// }

// void IngresarVentas(int matriz[][20], float precios[], int filas)
// {

//     int codigoProducto, mes, cantidad, sucursal;

//     printf("Ingrese las ventas realizadas en el año:\n");

//     do
//     {
//         printf("Ingrese codigo de producto (1000-1019): ");
//         scanf("%d", &codigoProducto);
//     } while ((codigoProducto < 1000) || (codigoProducto > 1019));

//     do
//     {
//         printf("Ingrese el mes correspondiente a la venta (1-12): ");
//         scanf("%d", &mes);
//     } while ((mes < 1) || (mes > 12));

//     do
//     {
//         printf("Ingrese la cantidad vendida: ");
//         scanf("%d", &cantidad);
//     } while (cantidad < 1);

//     do
//     {
//         printf("Ingrese la sucursal correspondiente: ");
//         scanf("%d", &sucursal);
//     } while ((sucursal != 100) || (sucursal != 200) || (sucursal != 300) || (sucursal != 400) || (sucursal != 500));

//     matriz[mes - 1][codigoProducto - 1000] += cantidad;
// }

// void GenerarResumenVentas(int matriz[][20], float precios)
// {

//     printf("Resumen de importe de Ventas por producto y mes: \n");
//     printf("Producto\tMes\tImporte\n");

//     for (int producto = 1000; producto <= 1019; producto++)
//     {
//         for (int mes = 1; mes <= 12; mes++)
//         {
//             int cantidad = matriz[mes][producto - 1000];
//             float importe = cantidad * precios[producto - 1000];

//             printf("%d\t\t%d\t%.2f\n", producto, mes, importe);
//         }
//     }
// }

// void MostrarTotalVentasSucursal (int matriz [][20]) {



// }