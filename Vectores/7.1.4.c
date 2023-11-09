/*7.1.4 Construir una función que reciba dos vectores enteros de igual tamaño y retorne un 1 si son guales o un
0 sino lo son. usar un flag para identificar cuando un valor del vector 1 es distinto al vector 2
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>
void Carga(int[], int);
int IgualdadVectores(int[], int[], int);

int main()
{
    int vectorIgualado;
    int vec1[10];
    int vec2[10];

    printf("Ingrese los valores del primer vector\n");
    Carga(vec1, 10);
    printf("Ingrese los valores del segundo vector\n");
    Carga(vec2, 10);

    vectorIgualado = IgualdadVectores(vec1, vec2, 10);

    if (vectorIgualado == 1)
    {
        printf("Los vectores son iguales\n");
    }
    else
        printf("Los vectores no son iguales\n");

    system("pause");
    return 0;
}

void Carga(int vector[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d", &vector[i]);
    }
}

int IgualdadVectores(int vec1[], int vec2[], int ce)
{
    int flag = 1;

    for (int i = 0; i < ce; i++)
    {
        if (vec1[i] == vec2[i])
        {
            flag = 1;
        }
        else
            flag = 0;
    }

    return flag;
}