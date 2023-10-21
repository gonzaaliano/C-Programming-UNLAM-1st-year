/*6.2. Se ingresan números enteros comprendidos entre 100 y 2000 (usar función LeerYValidar). Determinar
usando la función EstaDentroDelRango:
a. Cantidad de números ingresados entre 100 y 500
b. Cantidad de números pares ingresados entre 500 y 1200
c. Promedio de números ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un número igual a 99.
Para realizar este programa se deben realizar las siguientes funciones:
 EstaDentroDelRango: que reciba 3 enteros correspondientes a un número a validar y los límites
superior e inferior del rango. La función debe retornar un 1 si el número a validar se encuentra
dentro del rango indicado o un 0 si no lo está.
 LeerYValidar: que reciba los límites superior e inferior de un rango y retorne un número que se
encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la función). Para validar el
rango utilizar la función EstaDentroDelRango realizada en el punto anterior.
RESUELTO*/


#include <stdio.h>
#include <stdlib.h>
int LeerYValidar(int, int);
int EstaDentroDelRango(int, int, int);

int main()
{
    int num, cant100_500 = 0, cantPares500_1200 = 0, cant1200_2000 = 0;
    float promedio1200_2000, suma1200_2000 = 0;

    do
    {
        num = LeerYValidar(100, 2000);

        EstaDentroDelRango(num, 100, 2000);

        if (EstaDentroDelRango(num, 100, 500) == 1)
        {
            cant100_500++;
        }
        if (EstaDentroDelRango(num, 500, 1200) == 1)
        {
            if (num % 2 == 0)
            {
                cantPares500_1200++;
            }
        }
        if (EstaDentroDelRango(num, 1200, 2000) == 1)
        {
            suma1200_2000 += num;
            cant1200_2000++;
        }
    } while (num != 99);

    if (cant1200_2000 > 0)
    {
        promedio1200_2000 = suma1200_2000 / (float)cant1200_2000;
    }
    else
        printf("La cantidad de numeros entre 1200 y 2000 es igual a 0, por lo tanto no se puede calcular el promedio\n");

    printf("La cantidad de numeros entre 100 y 500 es de %d\n", cant100_500);
    printf("La cantidad de numeros pares entre 500 y 1200 es de %d\n", cantPares500_1200);
    printf("La cantidad de numeros entre 1200 y 2000 es de %d\n", cant1200_2000);
    printf("La suma de los numeros entre 1200 y 2000 es de %.2f\n", suma1200_2000);
    printf("El promedio de los numeros entre 1200 y 2000 es de %.2f\n", promedio1200_2000);

    system("pause");
    return 0;
}

int LeerYValidar(int li, int ls)
{

    int num;

    do
    {
        printf("Ingrese un numero entre %d y %d\n", li, ls);
        scanf("%d", &num);

        if (num != 99 && !EstaDentroDelRango(num, li, ls))
        {
            printf("El numero ingresado no esta dentro del rango solicitado. Intente de nuevo\n");
        }

    } while (num != 99 && !EstaDentroDelRango(num, li, ls));

    return num;
}

int EstaDentroDelRango(int numero, int liminf, int limsup)
{
    if (numero <= limsup && numero >= liminf)
    {
        return 1;
    }
    else
        return 0;
}