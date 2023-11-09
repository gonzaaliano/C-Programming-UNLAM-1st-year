/*6.5. Confeccionar un programa que permita ingresar varias ternas de valores a punto flotante, que finalice al
ingresar una terna con los valores ORDENADOS en forma creciente. Para cada terna exhibir la siguiente
pantalla:
** OPCIONES POSIBLES **
1 – Mayor valor
2 – Promedio
3 – Suma
4 - Finalizar
** Digite su opción:
Según la opción deseada debe aparecer en pantalla el resultado, sin borrar el menú. No admitir otros
valores de opción. Confeccionar y utilizar una función PARA CADA UNA de las opciones y otra para detectar
la condición final.*/

#include <stdio.h>
#include <stdlib.h>
void MenuOpciones();
float MayorValor(float, float, float);
float PromedioTernas(float, float, float);
float Suma(float, float, float);

int main()
{
    float n1, n2, n3, mayorValor, promedio, suma;
    int opcion;

    printf("Ingrese una terna de valores\n");
    scanf("%f%f%f", &n1, &n2, &n3);

    while (!(n1 < n2) && !(n2 < n3))
    {
        MenuOpciones();

        do
        {
            scanf("%d", &opcion);
            if (opcion < 1 || opcion > 4)
            {
                printf("Ha ingresado un numero de opcion incorrecta, vuelva a ingresar\n");
            }

        } while ((opcion < 1) && (opcion > 4));

        switch (opcion)
        {
        case 1:
            mayorValor = MayorValor(n1, n2, n3);
            printf("El mayor valor es: %.2f", mayorValor);
            break;
        case 2:
            promedio = PromedioTernas(n1, n2, n3);
            printf("El promedio de las ternas es de %.2f", promedio);
            break;
        case 3:
            suma = Suma(n1, n2, n3);
            printf("La suma de las ternas es de %.2f", suma);
            break;
        case 4:
            return 0;
            break;
        default:
            break;
        }

        printf("Ingrese una terna de valores\n");
        scanf("%f%f%f", &n1, &n2, &n3);
    }

    system("pause");
    return 0;
}

void MenuOpciones()
{
    int opcion;
    float promedio, suma, mayorValor;
    printf("** OPCIONES POSIBLES **\n");
    printf("1 - Mayor Valor\n");
    printf("2 - Promedio \n");
    printf("3 - Suma\n");
    printf("4 - Finalizar\n");
    printf("** Digite su opcion:\n");
}

float MayorValor(float numero1, float numero2, float numero3)
{
    float mayorValor;

    if (numero1 > numero2 && numero1 > numero3)
    {
        mayorValor = numero1;
    }
    if (numero2 > numero1 && numero2 > numero3)
    {
        mayorValor = numero2;
    }
    else
        mayorValor = numero3;

    return mayorValor;
}

float Suma(float numero1, float numero2, float numero3)
{
    float suma;

    suma = numero1 + numero2 + numero3;

    return suma;
}

float PromedioTernas(float numero1, float numero2, float numero3)
{
    float promedio, suma;

    suma = Suma(numero1, numero2, numero3);

    promedio = suma / 3;

    return promedio;
}
