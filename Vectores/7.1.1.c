/*7.1.1 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere
un vector de 10 posiciones con el contenido de ambos vectores uno a continuación del otro. Mostrar el vector
generado.
PARA CARGA PARCIAL DEL VECTOR USAR CICLO WHILE
PARA CARGA COMPLETA DEL VECTOR USAR CICLO FOR
RESUELTO
*/
void Cargar(int[], int);
int UnionVectores(int[], int[]);
void Mostrar(int[], int);

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec1[5];
    int vec2[5];

    printf("Ingrese los valores del vector 1\n");
    Cargar(vec1, 5);

    printf("Ingrese los valores del vector 2\n");
    Cargar(vec2, 5);

    UnionVectores(vec1, vec2);

    system("pause");
    return 0;
}

void Cargar(int vector[], int ce)
{

    for (int i = 0; i < ce; i++)
    {
        printf("Ingrese el numero en la posicion: %d\n", i);
        scanf("%d", &vector[i]);
    }
}

int UnionVectores(int vector1[], int vector2[])
{
    int vectorU[10];

    for (int i = 0; i < 5; i++)
    {
        vectorU[i] = vector1[i];
        printf("VectorU[%d] = %d y Vector1[%d] = %d\n", i, vectorU[i], i, vector1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        vectorU[4 + i] = vector2[i];
        printf("VectorU[%d] = %d y Vector2[%d] = %d\n", 5 + i, vectorU[i], i, vector2[i]);
    }

    printf("El contenido del vector es:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", vectorU[i]);
    }
}

void Mostrar(int vector[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        printf("%d", vector[i]);
    }
}