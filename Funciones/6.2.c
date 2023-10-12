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
rango utilizar la función EstaDentroDelRango realizada en el punto anterior.*/

#include <stdio.h>
#include <stdlib.h>
int EstaDentroDelRango(int, int, int);
int LeerYValidar(int, int);

int main()
{
    int num, cant100_500;

    printf("Ingrese numeros entre 100 y 2000\n");
    num = LeerYValidar(100, 2000);

    EstaDentroDelRango(num, 100, 2000);

    if (EstaDentroDelRango(num, 100, 500))
    {
        /* code */
    }
    

    

    system("pause");
    return 0;
}

LeerYValidar(ls, li)
{

    int num;

    printf("Ingrese numeros comprendidos dentro del rango\n");
    while (num != 99)
    {
        scanf("%d", &num);
    }

    return num;
}

EstaDentroDelRango(numero, ls, li)
{
    if (numero <= ls && numero >= li)
    {
        return 1;
    }
    else
        return 0;
}