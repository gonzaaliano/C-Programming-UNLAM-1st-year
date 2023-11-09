/*7.1.3 Realizar los siguientes vectores con 10 valores reales. Confeccionar un programa para:
a. Generar el vector VA con la información ingresada por teclado. // HECHO
b. Generar el vector VB, donde cada elemento es la raíz cuadrada del respectivo elemento de VA.
(para el cálculo de la raíz cuadrada utilizar la función sqrt disponible en la biblioteca math.h). Si el
número es negativo poner un 0 ya que no se puede calcular la raíz // HECHO
c. Calcular el vector VC como VA+VB. // HECHO
d. Copiar el vector VC en orden inverso en otro vector llamado VD. //HECHO
e. Hallar el valor máximo del vector VA y en qué posición se halló (el mayor es único). //HECHO
f. Dado un valor ingresado por teclado, indicar en qué posición se encontró del vector VC. //HECHO
g. Generar un vector VE con aquellos valores negativos que se encuentran en el vector VA.
h. Mostrar el contenido de todos los vectores.

FUNCIONES:
I. Para el ingreso del vector AA, del punto a.
II. Para generar el vector CC, del punto c.
III. Para realizar la búsqueda del punto f.
IV. Para generar el vector VE del punto g.
V. Para mostrar los valores de todos los vectores del punto h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Cargar(int[], int);
void RaizCuadrada(int[], int[], int);
void SumaVectores(int[], int[], int[], int);
void ValoresNegativos(int[], int[], int);
void BusquedaValor(int[], int);
void Mostrar(int[], int);

int main()
{
    int VecVA[10];
    int VecVB[10];
    int VecVC[10];
    int VecVD[10];
    int VecVE[10];

    Cargar(VecVA, 10);
    RaizCuadrada(VecVA, VecVB, 10);
    SumaVectores(VecVA, VecVB, VecVC, 10);
    BusquedaValor(VecVC, 10);

    // COPIA VECTOR VD
    for (int i = 0; i < 10; i++)
    {
        VecVD[i] = VecVC[9 - i];
    }

    ValoresNegativos(VecVA, VecVE, 10);

    Mostrar(VecVA, 10);
    Mostrar(VecVB, 10);
    Mostrar(VecVC, 10);
    Mostrar(VecVD, 10);
    Mostrar(VecVE, 10);

    system("pause");
    return 0;
}

void Cargar(int vector[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        printf("Ingrese valores al vector\n");
        scanf("%d", &vector[i]);
    }
}

void RaizCuadrada(int vector1[], int vector2[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        if (vector1[i] > 0)
        {
            vector2[i] = sqrt(vector1[i]);
        }
    }
}

void SumaVectores(int vector1[], int vector2[], int vector3[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}

void BusquedaValor(int vector[], int ce)
{
    int n, posicion;

    printf("Ingrese un valor por teclado\n");
    scanf("%d", &n);

    for (int i = 0; i < ce; i++)
    {
        if (vector[i] == n)
        {
            posicion = i;
        }
    }

    return posicion;
}

void ValoresNegativos(int vector1[], int vector2[], int ce)
{

    for (int i = 0; i < ce; i++)
    {
        if (vector1[i] < 0)
        {
            vector2[i] = vector1[i];
        }
    }
}

void Mostrar(int vector[], int ce)
{
    int i;
    for (i = 0; i < ce; i++)
        printf("\n%d", v[i]);
}