// 5.2.6 Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la
// siguiente escala:
// • menor a 50 pesos el 3.5 %
// • entre 50 y 150 pesos el 10 %
// • entre 151 y 300 pesos el 20 %.
// • mayor a 300 pesos el 25 %
// Confeccionar un programa que:
// a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes
// aclaratorios.
// b. Informe el importe promedio de todas las ventas realizadas.
// Se debe contemplar que se puedan ingresar varios importes y para finalizar se ingresa un valor negativo o cero.
//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cantVentas = 0;
    float importe, importeNeto, importePromedio, importeTotalVentas, porcDto;

    printf("Ingrese el importe de la venta:\n");
    scanf("%f", &importe);

    while (importe > 0)
    {
        cantVentas++;

        if (importe < 50)
        {
            importeNeto = importe - (importe * 0.035);
            porcDto = 3.5;
        }
        if ((importe >= 50) && (importe <= 150))
        {
            importeNeto = importe - (importe * 0.10);
            porcDto = 10;
        }
        if ((importe >= 151) && (importe <= 300))
        {
            importeNeto = importe - (importe * 0.20);
            porcDto = 20;
        }
        if (importe > 300)
        {
            importeNeto = importe - (importe * 0.30);
            porcDto = 30;
        }

        printf("El importe es de %.2f y el descuento es del %f\n", importe, porcDto);
        printf("El importe neto a cobrar es de %.2f\n", importeNeto);

        importeTotalVentas += importeNeto;

        printf("Ingrese el importe de la venta:\n");
        scanf("%f", &importe);
    }

    importePromedio = importeTotalVentas / (float)cantVentas;
    printf("El importe promedio de todas las ventas es de %.2f\n", importePromedio);

    system("pause");
    return 0;
}