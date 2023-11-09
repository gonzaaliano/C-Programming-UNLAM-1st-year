#include <stdio.h>
// SI O SI HAY QUE PONER LA CANTIDAD DE COLUMNAS, NECESITA EL DATO PARA SABER CUANTAS COLUMNAS SALTAR
void Cargar(int[][4], int, int);
void Mostrar(int[][4], int, int);

int main()
{

    int mat[3][4];
    Cargar(mat, 3, 4);
    Mostrar(mat, 3, 4);

    return 0;
}

void Cargar(int matriz[][4], int cantfilas, int cantcolumnas)
{
    int f, c;

    for (f = 0; f < cantfilas; f++)
    {
        for (c = 0; c < cantcolumnas; c++)
        {
            printf("Ingrese un valor\n");
            scanf("%d", &matriz[f][c]);
        }
    }
}

void Mostrar(int matriz[][4], int cantfilas, int cantcolumnas)
{

    int f, c;

    for (f = 0; f < cantfilas; f++)
    {
        printf("\nFila %d:", f + 1);
        for (c = 0; c < cantcolumnas; c++)
        {
            printf("%3d", matriz[f][c]);
        }
        printf("\n");
    }
}