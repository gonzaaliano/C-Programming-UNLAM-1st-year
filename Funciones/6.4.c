/*6.4. Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10, para ello generar una función
que valide dicho ingreso. Calcular:
a. Cuántos números son primos.
b. Cantidad de números pares.
c. Promedio de los números impares.
Utilizar las siguientes funciones:
 Resto: recibe por parámetro el Dividendo y el Divisor; Retorna el resto.
 EsPar: recibe por parámetro un número; Retorna 1 si es Par, 0 si es Impar; Invoca a la función Resto.
 EsPrimo: recibe por parámetro un número; Retorna 1 si es primo, 0 si no es primo; Invoca a la
función Resto. (un número es primero si solo es divisible por 1 y por sí mismo).
 Promedio: recibe por parámetro la suma y el contador; Retorna el promedio si contador > 0 sino
Retorna 0.
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>
int ValidacionIngreso(int, int, int);
int Resto(int, int);
int EsPar(int);
int EsPrimo(int);
float Promedio(int, int);

int main()
{
    int num, cantPrimos = 0, cantPares = 0, cantImpares = 0, sumaImpares = 0;
    float promedioImpares;

    num = ValidacionIngreso(1, 50, -10);

    while (num != -10)
    {
        cantPrimos += EsPrimo(num);

        if (EsPar(num) == 1)
        {
            cantPares++;
        }
        else
        {
            sumaImpares += num;
            cantImpares++;
        }

        num = ValidacionIngreso(1, 50, -10);
    }

    if (cantImpares > 0)
    {
        promedioImpares = sumaImpares / cantImpares;
        printf("CANTIDAD DE PRIMOS: %d\n", cantPrimos);
        printf("CANTIDAD DE PARES: %d\n", cantPares);
        printf("PROMEDIO IMPARES: %.2f\n", promedioImpares);
    }
    else
    {
        printf("No hubo numeros impares\n");
    }

    system("pause");
    return 0;
}

int ValidacionIngreso(int i, int f, int neg)
{
    int n;
    do
    {
        printf("Ingrese numeros entre 1 y 50(-10 Para Finalizar)\n");
        scanf("%d", &n);

        if ((n < i) || (n > f))
        {
            printf("ERROR, vuelva a ingresar un numero dentro del rango\n");
        }

    } while (((n < i) || (n > f)) && n != neg);

    return n;
}

int Resto(int dividendo, int divisor)
{
    int resto = 0;

    resto = dividendo % divisor;

    if (resto == 0)
    {
        return 1;
    }
    else
        return 0;
}

int EsPar(int num)
{
    int par;
    par = Resto(num, 2);
    if (par == 0)
    {
        return 1;
    }
    else
        return 0;
}

int EsPrimo(int num)
{
    int r = 0;
    for (int i = 1; i <= num; i++)
    {
        r += Resto(num, i);
    }
    if (r == 2)
    {
        return 1;
    }
    else
        return 0;
}

float Promedio(int suma, int contador)
{

    float promedio;

    if (contador > 0)
    {
        promedio = suma / (float)contador;

        return promedio;
    }
    else
    {
        return 0;
    }
}