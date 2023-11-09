/*1. Completar el código de la siguiente función que recibe un vector de 100 elementos cargados con números y un segundo
vector que se debe completar con los números negativos del vector recibido. La función debe retornar cuantos números
negativos se encontraron
int CopiarNegativos (int vNum[], int vNeg[], int cant)
{
// COMPLETAR
}
vNum vector ya cargado con números
vNeg vector donde debe guardar los negativos de vNum
cant cantidad de datos cargados en el vector vNum
2. Realizar una función que permita el ingreso de un dato validado.
int LeerYValidar(int limInf, int limSup, int dif)
{
}
limInf es el valor inicial del rango válido
limSup es el valor final del rango válido
dif es un valor adicional que también es válido (este valor puede estar o no dentro del rango)
La función debe retornar un valor correcto. En caso de que el ingreso sea incorrecto se lo debe volver a solicitar informando
un mensaje de error.
3. Realizar el código de un programa en lenguaje C que solicite las ventas del año, por cada venta se ingresa:
• mes (1 a 12)
• código de producto (1000 a 1010)// 11 productos
• cantidad (1 a 5000).
Pueden existir varias ventas para el mismo mes y producto. La carga de ventas finaliza con un mes igual a 99. Mostrar un
cuadro resumen de la cantidad vendida en cada mes por cada producto. Todos los ingresos se deben realizar utilizando la
función del punto 2. El cuadro resultado se debe mostrar utilizando una función.*/
#include <stdio.h>
#include <stdlib.h>
int CopiarNegativos(int[], int[], int);
int LeerYValidar(int, int, int);
void MostrarVentas(int[][11]);

int main()
{

    int matrizCantidadXMes[12][11] = {{0}};

    int mes, codigo, cant;

    printf("Ingrese el numero de mes\n");
    mes = LeerYValidar(1, 12, 99);

    while (mes != 99)
    {

        printf("Ingrese el codigo de producto\n");
        codigo = LeerYValidar(1000, 1010, 1001);
        printf("Ingrese la cantidad del producto\n");
        cant = LeerYValidar(1, 5000, 100);

        matrizCantidadXMes[mes - 1][codigo - 1000] += cant;

        // VOLVER A PEDIR DATOS
        printf("Ingrese el numero de mes\n");
        mes = LeerYValidar(1, 12, 99);
    }

    

    system("pause");
    return 0;
}

/*1. EJERCICIO BIEN*/ int CopiarNegativos(int vNum[], int vNeg[], int cant)
{

    int cantNegativos = 0;

    for (int i = 0; i < cant; i++)
    {
        if (vNum[i] < 0)
        {
            vNeg[i] = vNum[i];
            cantNegativos++;
        }
    }

    return cantNegativos;
}

/*2. EJERCICIO BIEN*/ int LeerYValidar(int liminf, int limsup, int dif)
{
    int n;

    do
    {
        printf("Ingrese un numero dentro del rango %d y %d", liminf, limsup);
        scanf("%d", &n);

        if ((n < liminf) || (n > limsup))
        {
            printf("Error, ha ingresado un numero por fuera del rango\n");
        }

    } while ((n != dif) && (n < liminf) || (n > limsup));
}

int MostrarVentas(int matriz[][11])
{
}