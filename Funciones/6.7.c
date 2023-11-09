/*6.7. Confeccionar un programa que permita ingresar diversas ternas de valores enteros mayores que 0 y
menores que 99. Finalizar el ingreso cuando se informen 3 valores iguales a 96, 97 y 98. Determinar e
informar para cada terna, el mayor y el menor de los valores. Confeccionar y utilizar una función con
parámetros llamada MayorMenor, que permita calcular el menor o el mayor valor de la terna según un
parámetro de configuración.*/

#include <stdio.h>
#include <stdio.h>
int MayorMenor(int, int, int);
int main()
{

    int n1, n2, n3;
    printf("Ingrese una terna de valores enteros mayores que 0 y menores que 99\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    while ((n1 || n2 || n3) != 96 && (n1 || n2 || n3) != 97 && (n1 || n2 || n3) ! 98)
    {

        MayorMenor(n1, n2, n3);

        printf("Ingrese una terna de valores enteros mayores que 0 y menores que 99\n");
        scanf("%d%d%d", &n1, &n2, &n3);
    }

    system("pause");
    return 0;
}

int MayorMenor(int n1, int n2, int n3)
{
    int mayor, menor, opcion;

    if ((n1 > n2) && (n1 > n3))
    {
        mayor = n1;
        if (n2 > n3)
        {
            menor = n3;
        }
        else
        {
            menor = n2;
        }
    }
    if ((n2 > n1) && (n2 > n3))
    {
        mayor = n2;

        if (n1 > n3)
        {
            menor = n3;
        }
        else
            menor = n1;
    }
    if ((n3 > n1) && (n3 > n2))
    {
        mayor = n3;

        if (n1 > n2)
        {
            menor = n2;
        }
        else
            menor = n1;
    }

    printf("Desea calcular el mayor o menor valor de la terna ? (Mayor = 1 / Menor = 0)\n");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        return printf("El mayor valor de la terna es: %d", mayor);
    }
    else
        return printf("El menor valor de la terna es: %d", menor);
}
