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
Retorna 0.*/

#include <stdio.h>
#include <stdlib.h>
int Resto(int, int);
int EsPar(int);
int EsPrimo(int);
float Promedio(int, int);

int Resto(dividendo, divisor) {
    int resto;

    resto = dividendo % divisor;

    return resto;
}

int EsPar(num) {

    Resto(dividendo, divisor);
    if (Resto() == 0)
    {
        return 1;
    } else
        return 0;
    
}

int EsPrimo(num) {

}

int main() {

}