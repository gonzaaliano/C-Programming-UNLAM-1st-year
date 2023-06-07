/*2.3. Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
aclaratorios la suma, el producto, el cociente y el resto.*/
//RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, suma, producto, cociente, resto; // DECLARACION DE LAS 2 VARIABLES

    printf("Bienvenido al programa calculadora\n");

    // INGRESO POR TECLADO
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);

    // CALCULOS

    suma = num1 + num2;
    producto = num1 * num2;
    cociente = num1 / num2;
    resto = num1 % num2;

    printf("La suma es: %d\n", suma);
    printf("El producto es: %d\n", producto);
    printf("El cociente es: %d\n", cociente);
    printf("La resto es: %d\n", resto);

    printf("Programa Terminado");

    system("pause");

    return 0;
}