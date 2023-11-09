/*7.2.1 Ingresar una matriz de 3x3 por teclado y un número entero. Realizar el producto de la matriz por la
constante.
RESUELTO*/

#include <stdio.h>
void CargaMatriz(int[][3], int, int);
void ProductoMatriz(int[][3], int, int, int);
void Mostrar(int[][3], int, int);

int main()
{
    int matriz[3][3];
    int n;

    printf("Ingrese un numero entero\n");
    scanf("%d", &n);

    CargaMatriz(matriz, 3, 3);
    ProductoMatriz(matriz, 3, 3, n);
    Mostrar(matriz, 3, 3);
}

void CargaMatriz(int matriz[][3], int cantFilas, int cantColumnas)
{

    int f, c;

    for (f = 0; f < cantFilas; f++)
    {
        for (c = 0; c < cantColumnas; c++)
        {
            printf("Ingrese un valor\n");
            scanf("%d", &matriz[f][c]);
        }
    }
}

void ProductoMatriz(int matriz[][3], int cantFilas, int cantColumnas, int n)
{
    int f, c;

    for (f = 0; f < cantFilas; f++)
    {
        for (c = 0; c < cantColumnas; c++)
        {
            matriz[f][c] *= n;
        }
    }
}

void Mostrar(int matriz[][3], int cantfilas, int cantcolumnas)
{

    int f, c;

    for (c = 0; c < cantcolumnas; c++)
    {
        printf("%d", c);
    }

    for (f = 0; f < cantfilas; f++)
    {
        printf("\nFila %1d:", f + 1);
        for (c = 0; c < cantcolumnas; c++)
        {
            printf("%3d", matriz[f][c]);
        }
    }
}
