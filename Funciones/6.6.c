/*6.6. Confeccionar un programa que permita determinar e informar en cuántos de los números enteros
comprendidos entre 10001 y 90009 existen más cifras 3 que 4. Debe existir por lo menos, un 4 para que
sea considerado el número como válido. Para resolverlo confeccionar una función llamada CIFRAS, que
pueda determinar cuántas cifras “n” existen en un número de 5 cifras.*/
//RESUELTO

#include <stdio.h>
#include <stdlib.h>
int Cifras(int, int);

int main()
{
    int cont = 0, c3, c4;

    for (int i = 10001; i <= 90009; i++)
    {
        c3 = Cifras(i, 3);
        c4 = Cifras(i, 4);

        if (c4 > 0 && c3 > c4)
        {
            cont++;
        }
    }

    printf("Hay %d cifras 3 que 4\n", cont);

    system("pause");
    return 0;
}

// EL PARAMETRO DE LA FUNCION ES EL NUMERO QUE DEBEMOS BUSCAR
//  INT1 EL NUMERO DE ITERACION
//  INT2 EL NUMERO A BUSCAR
int Cifras(int num, int digito)
{
    int contador = 0;

    // TOMA EL ULTIMO DIGITO DEL NUMERO
    // LO COMPARA CON LA CIFRA A BUSCAR
    while (num != 0)
    {
        if (num % 10 == digito)
        {
            contador++;
        }

        // ACHICA EL NUMERO
        num /= 10;
    }

    return contador;
}