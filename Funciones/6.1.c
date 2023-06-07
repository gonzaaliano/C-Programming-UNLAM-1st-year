/*6.1. Realizar un programa que al ingresar solicite el ingreso de dos números enteros y luego muestre por
pantalla el siguiente menú (las xx de los números deben ser reemplazadas con los valores
correspondientes):
Menú de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos Números
6) Salir
Ingrese su opción:
Al ingresar el número de la opción del 1 al 4, se realiza la operación y muestra el resultado hasta que se
presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra operación con los mismos
números. La opción 5 pide el ingreso de dos nuevos números de trabajo mientras que la opción 6 sale y
cierra el programa.
El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido debe solicitarlo
nuevamente.
Usar una función para mostrar el menú y retornar el valor elegido.
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>
void menu(int n1, int n2);

int main()
{
    int numero1, numero2;

    printf("Ingrese dos numeros enteros:\n");
    scanf("%d%d", &numero1, &numero2);

    menu(numero1, numero2);

    printf("Programa finalizado\n");
    return 0;
}

void menu(int a, int b)
{
    int opcion, suma, resta, multiplicacion, division;
    do
    {
        printf("Menu de opciones\n");
        printf("----------------\n");
        printf("Numero 1: %d\t Numero2: %d\n", a, b);

        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("5) Ingresar nuevos numeros\n");
        printf("6) Salir\n");

        printf("Ingrese su opcion:\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            suma = a + b;
            printf("La suma de los numeros es: %d\n", suma);
            system("pause");
            break;
        case 2:
            resta = a - b;
            printf("La resta de los numeros es: %d\n", resta);
            system("pause");
            break;
        case 3:
            multiplicacion = a * b;
            printf("La multiplicacion de los numeros es: %d\n", multiplicacion);
            system("pause");
            break;
        case 4:
            division = a / b;
            // if (b = 0)
            // {
            //     printf("No se puede dividir por 0.\n");
            // } // DA ERROR

            printf("La division de los numeros es: %d\n", division);
            system("pause");
            break;
        case 5:
            main();
            break;
        default:
            break;
        }

    } while (opcion != 6);

    return;
}
